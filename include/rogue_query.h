#ifndef ROGUE_QUERY_H
#define ROGUE_QUERY_H

//#define ROGUE_QUERY_MAX 128
//extern u16 gRogueQueryBufferSize;
//extern bool8 gRogueQuerySpeciesState[];
//extern u16 gRogueQueryBuffer[];



void RogueQuery_Clear(void);
void RogueQuery_CollapseBuffer(void);
u16* RogueQuery_BufferPtr(void);
u16 RogueQuery_BufferSize(void);


void RogueQuery_SpeciesOfType(u8 type);
void RogueQuery_SpeciesOfTypes(u8* type, u8 count);
void RogueQuery_EggSpeciesOnly(void);
void RogueQuery_EvolveSpeciesToLevel(u8 level);
void RogueQuery_EvolveSpeciesByItem();
void RogueQuery_SpeciesIsLegendary(void);
void RogueQuery_SpeciesIsNotLegendary(void);

#endif