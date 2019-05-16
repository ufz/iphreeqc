#define NAME          "IPhreeqc"
#define VER_MAJOR      3
#define VER_MINOR      5
#define VER_PATCH      0
#define VER_REVISION   14000
#define GIT_COMMIT     e12f551bda1441fa37d4ce8d22e3720d8fe21a6b

#define RELEASE_DATE           "February 14, 2019"

#define APR_STRINGIFY(n) APR_STRINGIFY_HELPER(n)
#define APR_STRINGIFY_HELPER(n) #n

/** Version number */
#define VER_NUM                APR_STRINGIFY(VER_MAJOR) \
                           "." APR_STRINGIFY(VER_MINOR) \
                           "." APR_STRINGIFY(VER_PATCH) \
                           "." APR_STRINGIFY(VER_REVISION)



#define PRODUCT_NAME   NAME \
                       "-" APR_STRINGIFY(VER_MAJOR) \
                       "." APR_STRINGIFY(VER_MINOR)

#if defined(_WIN64)
#define VERSION_STRING         APR_STRINGIFY(VER_MAJOR) \
                           "." APR_STRINGIFY(VER_MINOR) \
                           "." APR_STRINGIFY(VER_PATCH) \
                           "-" APR_STRINGIFY(VER_REVISION) \
                           "-x64"
#else
#define VERSION_STRING         APR_STRINGIFY(VER_MAJOR) \
                           "." APR_STRINGIFY(VER_MINOR) \
                           "." APR_STRINGIFY(VER_PATCH) \
                           "-" APR_STRINGIFY(VER_REVISION)
#endif
