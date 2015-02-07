
#ifndef SEC_REGION_H
#define SEC_REGION_H

#define REGION_MASK                 (0xF0000000)
#define REGION_BANK                 (0x10000000)

#define DA_DOWNLOAD_LOC             (0xC2000000)
#define DA_DOWNLOAD_MAX_SZ          (0x20000)

extern void sec_region_check (U32 offset, U32 length);
extern U32 da_region_check (U32 addr, U32 len);

#endif /* SEC_REGION_H */
