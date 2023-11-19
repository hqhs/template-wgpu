#if !defined(COMPILER_MSVC)
#define COMPILER_MSVC 0
#endif

#if !defined(COMPILER_LLVM)
#define COMPILER_LLVM 0
#endif

#if !COMPILER_MSVC && !COMPILER_LLVM
#if _MSC_VER
#undef COMPILER_MSVC
#define COMPILER_MSVC 1
#else
// TODO(casey): Moar compilerz!!!
#undef COMPILER_LLVM
#define COMPILER_LLVM 1
#endif
#endif

#include <stdint.h>
#include <stddef.h>
#include <limits.h>
#include <float.h>

typedef int8_t int8;
typedef int16_t int16;
typedef int32_t int32;
typedef int64_t int64;
typedef int32 bool32;

typedef uint8_t uint8;
typedef uint16_t uint16;
typedef uint32_t uint32;
typedef uint64_t uint64;

typedef intptr_t intptr;
typedef uintptr_t uintptr;

typedef size_t memory_index;

typedef float real32;
typedef double real64;

typedef int8 i8;
typedef int8 i08;
typedef int16 i16;
typedef int32 i32;
typedef int64 i64;
typedef bool32 b32;

typedef uint8 u8;
typedef uint8 u08;
typedef uint16 u16;
typedef uint32 u32;
typedef uint64 u64;

typedef real32 f32;
typedef real64 f64;

typedef uintptr_t usize;
typedef intptr_t isize;

typedef b32 b32x;
typedef u32 u32x;

#define flag8(type)  u8
#define flag16(type) u16
#define flag32(type) u32
#define flag64(type) u64

#define enum8(type)  u8
#define enum16(type) u16
#define enum32(type) u32
#define enum64(type) u64

#define U8Max        255
#define U16Max       65535
#define U32Min       0
#define U32Max       ((u32) -1)
#define U64Max       ((u64) -1)
#define F32Max       FLT_MAX
#define F32Min       -FLT_MAX
