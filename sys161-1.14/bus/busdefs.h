/*
 * Number of slots
 */
#define LAMEBUS_NSLOTS               32

/*
 * Bus controller's hardwired slot
 */
#define LAMEBUS_CONTROLLER_SLOT      31

/*
 * Bus controller's private registers (offset into config area for slot 31)
 */
#define LAMEBUS_CONTROLLER_REGADDR   0x200

/*
 * Mapped memory per slot
 */
#define LAMEBUS_SLOT_MEM             0x10000

/*
 * Size of per-slot config register region
 */
#define LAMEBUS_CONFIG_SIZE          1024

