// Blocks
static int air[] = {
    0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,
};

static int frame[] = {
    1,1,1,1,1,1,1,1,1,1,1,1,
    1,0,0,0,0,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,0,0,0,0,1,
    1,1,1,1,1,1,1,1,1,1,1,1,
};

static int dirt[] = {
    1,1,1,1,1,1,1,1,1,1,1,1,
    1,0,0,0,0,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,0,0,0,0,1,
    1,1,1,0,1,1,0,0,0,1,1,1,
    1,0,0,1,0,0,1,0,1,0,0,1,
    1,1,0,0,0,0,0,1,0,0,0,1,
    1,0,1,0,1,0,0,0,0,0,1,1,
    1,0,0,0,0,0,1,0,1,0,0,1,
    1,0,0,0,1,0,0,0,0,0,0,1,
    1,0,1,0,0,0,0,0,1,0,0,1,
    1,0,0,0,0,0,0,0,0,0,0,1,
    1,1,1,1,1,1,1,1,1,1,1,1,
};

static int wood[] = {
    1,1,1,1,1,1,1,1,1,1,1,1,
    1,0,1,0,1,0,1,0,0,1,0,1,
    1,0,1,0,1,0,1,1,0,1,0,1,
    1,0,1,0,1,0,0,1,0,1,0,1,
    1,0,1,0,1,0,0,1,0,1,0,1,
    1,0,1,0,1,0,0,1,0,1,0,1,
    1,0,1,0,1,0,1,1,0,1,0,1,
    1,0,0,1,0,0,1,0,0,1,0,1,
    1,0,0,1,0,0,1,0,0,1,0,1,
    1,0,1,1,1,0,1,0,0,1,0,1,
    1,0,1,0,1,0,1,0,0,1,0,1,
    1,1,1,1,1,1,1,1,1,1,1,1,
};

static int leaf[] = {
    1,1,1,1,1,1,1,1,1,1,1,1,
    1,0,0,1,0,1,0,0,1,0,0,1,
    1,0,1,0,1,0,1,1,0,1,1,1,
    1,1,0,1,0,1,0,1,0,1,0,1,
    1,0,0,1,0,0,1,1,1,0,1,1,
    1,1,1,1,1,0,0,1,0,1,0,1,
    1,0,1,0,0,1,1,0,0,1,0,1,
    1,0,0,1,1,0,0,1,1,0,1,1,
    1,1,0,1,0,0,1,1,0,1,0,1,
    1,0,1,0,1,0,1,1,0,1,0,1,
    1,0,1,0,1,0,1,0,1,0,0,1,
    1,1,1,1,1,1,1,1,1,1,1,1,
};

static int stone[] = {
    1,1,1,1,1,1,1,1,1,1,1,1,
    1,0,0,0,0,0,0,0,0,0,0,1,
    1,1,1,1,0,0,0,0,1,1,1,1,
    1,0,0,0,1,1,1,0,0,0,0,1,
    1,0,0,0,0,0,0,0,0,0,0,1,
    1,0,0,0,0,0,1,1,1,1,1,1,
    1,0,0,0,0,0,0,0,0,0,0,1,
    1,1,1,1,1,0,0,0,0,0,0,1,
    1,0,0,0,0,0,1,1,1,0,0,1,
    1,0,1,1,1,0,0,0,1,1,1,1,
    1,0,0,0,0,0,0,0,0,0,0,1,
    1,1,1,1,1,1,1,1,1,1,1,1,
};

static int iron_block[] = {
    1,1,1,1,1,1,1,1,1,1,1,1,
    1,0,0,0,0,0,0,0,0,0,0,1,
    1,1,1,1,1,0,0,0,1,1,1,1,
    1,0,0,0,0,1,1,1,1,0,0,1,
    1,1,1,1,0,1,0,0,1,0,0,1,
    1,0,0,1,1,1,1,1,1,0,0,1,
    1,0,1,1,1,1,0,0,0,0,1,1,
    1,0,1,0,0,1,1,1,1,1,0,1,
    1,1,1,1,1,1,1,0,0,1,0,1,
    1,0,1,1,1,0,1,1,1,1,0,1,
    1,0,0,0,0,0,0,0,0,0,0,1,
    1,1,1,1,1,1,1,1,1,1,1,1,
};

static int diamond_block[] = {
    1,1,1,1,1,1,1,1,1,1,1,1,
    1,0,0,0,0,0,0,0,1,1,1,1,
    1,1,1,1,1,0,0,0,0,0,0,1,
    1,0,0,1,1,1,1,1,1,0,0,1,
    1,0,1,0,0,0,0,0,0,1,0,1,
    1,0,0,1,0,0,0,0,1,0,0,1,
    1,0,0,0,1,0,0,1,0,0,0,1,
    1,0,0,0,0,1,1,0,0,1,1,1,
    1,1,1,1,1,0,0,0,0,0,0,1,
    1,0,0,0,0,0,1,1,1,0,0,1,
    1,0,1,1,1,0,0,0,1,1,1,1,
    1,1,1,1,1,1,1,1,1,1,1,1,
};