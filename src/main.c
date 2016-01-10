#include <pebble.h>
#include "track.h"
#include "items.h"

char title[64];

static void init(void) {
  strcpy(title, "None");
  app_message_open(app_message_inbox_size_maximum(), app_message_outbox_size_maximum());
  create_track_window();
  create_item_window();
}

static void deinit(void) {
  destroy_item_window();
  destroy_track_window();
}

int main(void) {
  init();
  app_event_loop();
  deinit();
}
