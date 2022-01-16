#pragma once

#ifndef MMU_STATE_H
#define MMU_STATE_H

typedef struct {
  int currentColorSelectorPosition = -1;

} MMU_STATE;

extern MMU_STATE mmu_state;

#endif
