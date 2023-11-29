

#include "def.h"



volatile uint8_t tick = 0;


uint8_t isElapsed(uint8_t start, uint8_t tout)
{
  uint8_t now;
  uint8_t elapsed;
  
  now = tick;
  if (now >= start) {
    elapsed = now - start;
  }
  else {
    elapsed = 256 - start + now;
  }
  
  if (elapsed > tout) {
    return 1;
  }
  else {
    return 0;
  }
}
