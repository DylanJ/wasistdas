#include "client.h"

extern int g_client_ids;

client_t *client_find(UDPsocket sd) {
	for (int i = 0; i < MAX_CLIENTS; i++) {
		if (g_clients[i] == NULL ) {
			continue;
		}
		if (g_clients[i]->socket == sd) {
			return g_clients[i];
		}
	}

	return NULL;
}

void client_print_info(client_t *c) {
	printf("id: %d\n", c->id);
	printf("name: %s\n", c->name);
	printf("ip %x:%x\n", c->ip.host, c->ip.port);
	printf("socket %p\n", (void*)c->socket);
}

client_t *client_create() {
	client_t *c = malloc(sizeof(client_t));
	c->id = g_client_ids++;

	for( int i = 0; i < MAX_CLIENTS; i++ ) {
		if ( g_clients[i] != NULL ) {
			continue;
		}

		printf("Adding client #%d\n", i);
		g_client_count++;
		g_clients[i] = c;

		break;
	}

	return c;
}