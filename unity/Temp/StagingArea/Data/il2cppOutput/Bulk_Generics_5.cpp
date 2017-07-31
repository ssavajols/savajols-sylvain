#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t4152991307;
// System.Char[]
struct CharU5BU5D_t2871754841;
// System.Void
struct Void_t3482619275;

extern RuntimeClass* StringU5BU5D_t4152991307_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1230245907;
extern Il2CppCodeGenString* _stringLiteral1915020316;
extern Il2CppCodeGenString* _stringLiteral147751910;
extern const uint32_t KeyValuePair_2_ToString_m1937563875_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m2646806735_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m3601648059_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m3544534171_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m2879505104_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m1687193337_MetadataUsageId;

struct StringU5BU5D_t4152991307;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef VALUETYPE_T1675454389_H
#define VALUETYPE_T1675454389_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t1675454389  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t1675454389_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t1675454389_marshaled_com
{
};
#endif // VALUETYPE_T1675454389_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t2871754841* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t2871754841* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t2871754841** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t2871754841* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef KEYVALUEPAIR_2_T2990668001_H
#define KEYVALUEPAIR_2_T2990668001_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t2990668001 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2990668001, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2990668001, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2990668001_H
#ifndef KEYVALUEPAIR_2_T4182910484_H
#define KEYVALUEPAIR_2_T4182910484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
struct  KeyValuePair_2_t4182910484 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4182910484, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4182910484, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T4182910484_H
#ifndef BOOLEAN_T1378508783_H
#define BOOLEAN_T1378508783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t1378508783 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t1378508783, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t1378508783_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t1378508783_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t1378508783_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T1378508783_H
#ifndef KEYVALUEPAIR_2_T2049736611_H
#define KEYVALUEPAIR_2_T2049736611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
struct  KeyValuePair_2_t2049736611 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2049736611, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2049736611, ___value_1)); }
	inline bool get_value_1() const { return ___value_1; }
	inline bool* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(bool value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2049736611_H
#ifndef INT32_T3511682656_H
#define INT32_T3511682656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t3511682656 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t3511682656, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T3511682656_H
#ifndef VOID_T3482619275_H
#define VOID_T3482619275_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t3482619275 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T3482619275_H
#ifndef KEYVALUEPAIR_2_T1904273794_H
#define KEYVALUEPAIR_2_T1904273794_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct  KeyValuePair_2_t1904273794 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1904273794, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1904273794, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T1904273794_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef KEYVALUEPAIR_2_T3953226483_H
#define KEYVALUEPAIR_2_T3953226483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>
struct  KeyValuePair_2_t3953226483 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	IntPtr_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3953226483, ___key_0)); }
	inline IntPtr_t get_key_0() const { return ___key_0; }
	inline IntPtr_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(IntPtr_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3953226483, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3953226483_H
#ifndef PLAYABLEHANDLE_T1401871268_H
#define PLAYABLEHANDLE_T1401871268_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableHandle
struct  PlayableHandle_t1401871268 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	IntPtr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableHandle::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t1401871268, ___m_Handle_0)); }
	inline IntPtr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline IntPtr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(IntPtr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t1401871268, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEHANDLE_T1401871268_H
#ifndef PLAYABLE_T3351251530_H
#define PLAYABLE_T3351251530_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.Playable
struct  Playable_t3351251530 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::m_Handle
	PlayableHandle_t1401871268  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Playable_t3351251530, ___m_Handle_0)); }
	inline PlayableHandle_t1401871268  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t1401871268 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t1401871268  value)
	{
		___m_Handle_0 = value;
	}
};

struct Playable_t3351251530_StaticFields
{
public:
	// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::m_NullPlayable
	Playable_t3351251530  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(Playable_t3351251530_StaticFields, ___m_NullPlayable_1)); }
	inline Playable_t3351251530  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline Playable_t3351251530 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(Playable_t3351251530  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLE_T3351251530_H
#ifndef CONNECTIONCACHE_T4199187649_H
#define CONNECTIONCACHE_T4199187649_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Timeline.TimelinePlayable/ConnectionCache
struct  ConnectionCache_t4199187649 
{
public:
	// UnityEngine.Playables.Playable UnityEngine.Timeline.TimelinePlayable/ConnectionCache::playable
	Playable_t3351251530  ___playable_0;
	// System.Int32 UnityEngine.Timeline.TimelinePlayable/ConnectionCache::port
	int32_t ___port_1;
	// UnityEngine.Playables.Playable UnityEngine.Timeline.TimelinePlayable/ConnectionCache::parent
	Playable_t3351251530  ___parent_2;
	// System.Single UnityEngine.Timeline.TimelinePlayable/ConnectionCache::evalWeight
	float ___evalWeight_3;

public:
	inline static int32_t get_offset_of_playable_0() { return static_cast<int32_t>(offsetof(ConnectionCache_t4199187649, ___playable_0)); }
	inline Playable_t3351251530  get_playable_0() const { return ___playable_0; }
	inline Playable_t3351251530 * get_address_of_playable_0() { return &___playable_0; }
	inline void set_playable_0(Playable_t3351251530  value)
	{
		___playable_0 = value;
	}

	inline static int32_t get_offset_of_port_1() { return static_cast<int32_t>(offsetof(ConnectionCache_t4199187649, ___port_1)); }
	inline int32_t get_port_1() const { return ___port_1; }
	inline int32_t* get_address_of_port_1() { return &___port_1; }
	inline void set_port_1(int32_t value)
	{
		___port_1 = value;
	}

	inline static int32_t get_offset_of_parent_2() { return static_cast<int32_t>(offsetof(ConnectionCache_t4199187649, ___parent_2)); }
	inline Playable_t3351251530  get_parent_2() const { return ___parent_2; }
	inline Playable_t3351251530 * get_address_of_parent_2() { return &___parent_2; }
	inline void set_parent_2(Playable_t3351251530  value)
	{
		___parent_2 = value;
	}

	inline static int32_t get_offset_of_evalWeight_3() { return static_cast<int32_t>(offsetof(ConnectionCache_t4199187649, ___evalWeight_3)); }
	inline float get_evalWeight_3() const { return ___evalWeight_3; }
	inline float* get_address_of_evalWeight_3() { return &___evalWeight_3; }
	inline void set_evalWeight_3(float value)
	{
		___evalWeight_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONCACHE_T4199187649_H
#ifndef KEYVALUEPAIR_2_T575448181_H
#define KEYVALUEPAIR_2_T575448181_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Timeline.TimelinePlayable/ConnectionCache>
struct  KeyValuePair_2_t575448181 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ConnectionCache_t4199187649  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t575448181, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t575448181, ___value_1)); }
	inline ConnectionCache_t4199187649  get_value_1() const { return ___value_1; }
	inline ConnectionCache_t4199187649 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(ConnectionCache_t4199187649  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T575448181_H
// System.String[]
struct StringU5BU5D_t4152991307  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1201521419_gshared (KeyValuePair_2_t1904273794 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m2375273606_gshared (KeyValuePair_2_t1904273794 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m217576498_gshared (KeyValuePair_2_t1904273794 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m1442676567_gshared (KeyValuePair_2_t1904273794 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m785586692_gshared (KeyValuePair_2_t1904273794 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1937563875_gshared (KeyValuePair_2_t1904273794 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m590995203_gshared (KeyValuePair_2_t3953226483 * __this, IntPtr_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m3900957011_gshared (KeyValuePair_2_t3953226483 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m698301711_gshared (KeyValuePair_2_t3953226483 * __this, IntPtr_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Key()
extern "C"  IntPtr_t KeyValuePair_2_get_Key_m2986073517_gshared (KeyValuePair_2_t3953226483 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m265109368_gshared (KeyValuePair_2_t3953226483 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2646806735_gshared (KeyValuePair_2_t3953226483 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m4043054412_gshared (KeyValuePair_2_t2049736611 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1733398899_gshared (KeyValuePair_2_t2049736611 * __this, bool p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2756558650_gshared (KeyValuePair_2_t2049736611 * __this, RuntimeObject * ___key0, bool ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m796298942_gshared (KeyValuePair_2_t2049736611 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Value()
extern "C"  bool KeyValuePair_2_get_Value_m632962930_gshared (KeyValuePair_2_t2049736611 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3601648059_gshared (KeyValuePair_2_t2049736611 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1204477076_gshared (KeyValuePair_2_t4182910484 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m3328533834_gshared (KeyValuePair_2_t4182910484 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m1853642056_gshared (KeyValuePair_2_t4182910484 * __this, RuntimeObject * ___key0, int32_t ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m2931559392_gshared (KeyValuePair_2_t4182910484 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m2985363355_gshared (KeyValuePair_2_t4182910484 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3544534171_gshared (KeyValuePair_2_t4182910484 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2646310514_gshared (KeyValuePair_2_t2990668001 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m3816633359_gshared (KeyValuePair_2_t2990668001 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m4072285412_gshared (KeyValuePair_2_t2990668001 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m2348436013_gshared (KeyValuePair_2_t2990668001 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m2175122682_gshared (KeyValuePair_2_t2990668001 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2879505104_gshared (KeyValuePair_2_t2990668001 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Timeline.TimelinePlayable/ConnectionCache>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m460644162_gshared (KeyValuePair_2_t575448181 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Timeline.TimelinePlayable/ConnectionCache>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m2153222660_gshared (KeyValuePair_2_t575448181 * __this, ConnectionCache_t4199187649  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Timeline.TimelinePlayable/ConnectionCache>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3831787988_gshared (KeyValuePair_2_t575448181 * __this, RuntimeObject * ___key0, ConnectionCache_t4199187649  ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Timeline.TimelinePlayable/ConnectionCache>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m719357593_gshared (KeyValuePair_2_t575448181 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Timeline.TimelinePlayable/ConnectionCache>::get_Value()
extern "C"  ConnectionCache_t4199187649  KeyValuePair_2_get_Value_m2994858808_gshared (KeyValuePair_2_t575448181 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Timeline.TimelinePlayable/ConnectionCache>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1687193337_gshared (KeyValuePair_2_t575448181 * __this, const RuntimeMethod* method);

// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m1201521419(__this, p0, method) ((  void (*) (KeyValuePair_2_t1904273794 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m1201521419_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m2375273606(__this, p0, method) ((  void (*) (KeyValuePair_2_t1904273794 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Value_m2375273606_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m217576498(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t1904273794 *, int32_t, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m217576498_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m1442676567(__this, method) ((  int32_t (*) (KeyValuePair_2_t1904273794 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1442676567_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m785586692(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t1904273794 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m785586692_gshared)(__this, method)
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m1382790325 (int32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String[])
extern "C"  String_t* String_Concat_m3088150928 (RuntimeObject * __this /* static, unused */, StringU5BU5D_t4152991307* ___values0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
#define KeyValuePair_2_ToString_m1937563875(__this, method) ((  String_t* (*) (KeyValuePair_2_t1904273794 *, const RuntimeMethod*))KeyValuePair_2_ToString_m1937563875_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m590995203(__this, p0, method) ((  void (*) (KeyValuePair_2_t3953226483 *, IntPtr_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m590995203_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m3900957011(__this, p0, method) ((  void (*) (KeyValuePair_2_t3953226483 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Value_m3900957011_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m698301711(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t3953226483 *, IntPtr_t, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m698301711_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m2986073517(__this, method) ((  IntPtr_t (*) (KeyValuePair_2_t3953226483 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m2986073517_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m265109368(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t3953226483 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m265109368_gshared)(__this, method)
// System.String System.IntPtr::ToString()
extern "C"  String_t* IntPtr_ToString_m3680779304 (IntPtr_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::ToString()
#define KeyValuePair_2_ToString_m2646806735(__this, method) ((  String_t* (*) (KeyValuePair_2_t3953226483 *, const RuntimeMethod*))KeyValuePair_2_ToString_m2646806735_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m4043054412(__this, p0, method) ((  void (*) (KeyValuePair_2_t2049736611 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Key_m4043054412_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m1733398899(__this, p0, method) ((  void (*) (KeyValuePair_2_t2049736611 *, bool, const RuntimeMethod*))KeyValuePair_2_set_Value_m1733398899_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m2756558650(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t2049736611 *, RuntimeObject *, bool, const RuntimeMethod*))KeyValuePair_2__ctor_m2756558650_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Key()
#define KeyValuePair_2_get_Key_m796298942(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t2049736611 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m796298942_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Value()
#define KeyValuePair_2_get_Value_m632962930(__this, method) ((  bool (*) (KeyValuePair_2_t2049736611 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m632962930_gshared)(__this, method)
// System.String System.Boolean::ToString()
extern "C"  String_t* Boolean_ToString_m3304262529 (bool* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::ToString()
#define KeyValuePair_2_ToString_m3601648059(__this, method) ((  String_t* (*) (KeyValuePair_2_t2049736611 *, const RuntimeMethod*))KeyValuePair_2_ToString_m3601648059_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m1204477076(__this, p0, method) ((  void (*) (KeyValuePair_2_t4182910484 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Key_m1204477076_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m3328533834(__this, p0, method) ((  void (*) (KeyValuePair_2_t4182910484 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Value_m3328533834_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m1853642056(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t4182910484 *, RuntimeObject *, int32_t, const RuntimeMethod*))KeyValuePair_2__ctor_m1853642056_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Key()
#define KeyValuePair_2_get_Key_m2931559392(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t4182910484 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m2931559392_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Value()
#define KeyValuePair_2_get_Value_m2985363355(__this, method) ((  int32_t (*) (KeyValuePair_2_t4182910484 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m2985363355_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::ToString()
#define KeyValuePair_2_ToString_m3544534171(__this, method) ((  String_t* (*) (KeyValuePair_2_t4182910484 *, const RuntimeMethod*))KeyValuePair_2_ToString_m3544534171_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m2646310514(__this, p0, method) ((  void (*) (KeyValuePair_2_t2990668001 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Key_m2646310514_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m3816633359(__this, p0, method) ((  void (*) (KeyValuePair_2_t2990668001 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Value_m3816633359_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m4072285412(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t2990668001 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m4072285412_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m2348436013(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t2990668001 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m2348436013_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m2175122682(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t2990668001 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m2175122682_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::ToString()
#define KeyValuePair_2_ToString_m2879505104(__this, method) ((  String_t* (*) (KeyValuePair_2_t2990668001 *, const RuntimeMethod*))KeyValuePair_2_ToString_m2879505104_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Timeline.TimelinePlayable/ConnectionCache>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m460644162(__this, p0, method) ((  void (*) (KeyValuePair_2_t575448181 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Key_m460644162_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Timeline.TimelinePlayable/ConnectionCache>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m2153222660(__this, p0, method) ((  void (*) (KeyValuePair_2_t575448181 *, ConnectionCache_t4199187649 , const RuntimeMethod*))KeyValuePair_2_set_Value_m2153222660_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Timeline.TimelinePlayable/ConnectionCache>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m3831787988(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t575448181 *, RuntimeObject *, ConnectionCache_t4199187649 , const RuntimeMethod*))KeyValuePair_2__ctor_m3831787988_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Timeline.TimelinePlayable/ConnectionCache>::get_Key()
#define KeyValuePair_2_get_Key_m719357593(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t575448181 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m719357593_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Timeline.TimelinePlayable/ConnectionCache>::get_Value()
#define KeyValuePair_2_get_Value_m2994858808(__this, method) ((  ConnectionCache_t4199187649  (*) (KeyValuePair_2_t575448181 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m2994858808_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Timeline.TimelinePlayable/ConnectionCache>::ToString()
#define KeyValuePair_2_ToString_m1687193337(__this, method) ((  String_t* (*) (KeyValuePair_2_t575448181 *, const RuntimeMethod*))KeyValuePair_2_ToString_m1687193337_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m217576498_gshared (KeyValuePair_2_t1904273794 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m1201521419((KeyValuePair_2_t1904273794 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RuntimeObject * L_1 = ___value1;
		KeyValuePair_2_set_Value_m2375273606((KeyValuePair_2_t1904273794 *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m217576498_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t1904273794 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1904273794 *>(__this + 1);
	KeyValuePair_2__ctor_m217576498(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m1442676567_gshared (KeyValuePair_2_t1904273794 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m1442676567_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1904273794 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1904273794 *>(__this + 1);
	return KeyValuePair_2_get_Key_m1442676567(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1201521419_gshared (KeyValuePair_2_t1904273794 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m1201521419_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1904273794 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1904273794 *>(__this + 1);
	KeyValuePair_2_set_Key_m1201521419(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m785586692_gshared (KeyValuePair_2_t1904273794 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m785586692_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1904273794 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1904273794 *>(__this + 1);
	return KeyValuePair_2_get_Value_m785586692(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m2375273606_gshared (KeyValuePair_2_t1904273794 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m2375273606_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1904273794 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1904273794 *>(__this + 1);
	KeyValuePair_2_set_Value_m2375273606(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1937563875_gshared (KeyValuePair_2_t1904273794 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m1937563875_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t4152991307* G_B2_1 = NULL;
	StringU5BU5D_t4152991307* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t4152991307* G_B1_1 = NULL;
	StringU5BU5D_t4152991307* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t4152991307* G_B3_2 = NULL;
	StringU5BU5D_t4152991307* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t4152991307* G_B5_1 = NULL;
	StringU5BU5D_t4152991307* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t4152991307* G_B4_1 = NULL;
	StringU5BU5D_t4152991307* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t4152991307* G_B6_2 = NULL;
	StringU5BU5D_t4152991307* G_B6_3 = NULL;
	{
		StringU5BU5D_t4152991307* L_0 = (StringU5BU5D_t4152991307*)((StringU5BU5D_t4152991307*)SZArrayNew(StringU5BU5D_t4152991307_il2cpp_TypeInfo_var, (uint32_t)5));
		ArrayElementTypeCheck (L_0, _stringLiteral1230245907);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1230245907);
		StringU5BU5D_t4152991307* L_1 = (StringU5BU5D_t4152991307*)L_0;
		int32_t L_2 = KeyValuePair_2_get_Key_m1442676567((KeyValuePair_2_t1904273794 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		int32_t L_3 = KeyValuePair_2_get_Key_m1442676567((KeyValuePair_2_t1904273794 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_3;
		String_t* L_4 = Int32_ToString_m1382790325((int32_t*)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t4152991307* L_6 = (StringU5BU5D_t4152991307*)G_B3_3;
		ArrayElementTypeCheck (L_6, _stringLiteral1915020316);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1915020316);
		StringU5BU5D_t4152991307* L_7 = (StringU5BU5D_t4152991307*)L_6;
		RuntimeObject * L_8 = KeyValuePair_2_get_Value_m785586692((KeyValuePair_2_t1904273794 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
		if (!L_8)
		{
			G_B5_0 = 3;
			G_B5_1 = L_7;
			G_B5_2 = L_7;
			goto IL_0072;
		}
	}
	{
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m785586692((KeyValuePair_2_t1904273794 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (RuntimeObject *)L_9;
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_1)));
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t4152991307* L_12 = (StringU5BU5D_t4152991307*)G_B6_3;
		ArrayElementTypeCheck (L_12, _stringLiteral147751910);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral147751910);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m3088150928(NULL /*static, unused*/, (StringU5BU5D_t4152991307*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m1937563875_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1904273794 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1904273794 *>(__this + 1);
	return KeyValuePair_2_ToString_m1937563875(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m698301711_gshared (KeyValuePair_2_t3953226483 * __this, IntPtr_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m590995203((KeyValuePair_2_t3953226483 *)__this, (IntPtr_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RuntimeObject * L_1 = ___value1;
		KeyValuePair_2_set_Value_m3900957011((KeyValuePair_2_t3953226483 *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m698301711_AdjustorThunk (RuntimeObject * __this, IntPtr_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t3953226483 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3953226483 *>(__this + 1);
	KeyValuePair_2__ctor_m698301711(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Key()
extern "C"  IntPtr_t KeyValuePair_2_get_Key_m2986073517_gshared (KeyValuePair_2_t3953226483 * __this, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = (IntPtr_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  IntPtr_t KeyValuePair_2_get_Key_m2986073517_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3953226483 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3953226483 *>(__this + 1);
	return KeyValuePair_2_get_Key_m2986073517(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m590995203_gshared (KeyValuePair_2_t3953226483 * __this, IntPtr_t ___value0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m590995203_AdjustorThunk (RuntimeObject * __this, IntPtr_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t3953226483 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3953226483 *>(__this + 1);
	KeyValuePair_2_set_Key_m590995203(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m265109368_gshared (KeyValuePair_2_t3953226483 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m265109368_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3953226483 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3953226483 *>(__this + 1);
	return KeyValuePair_2_get_Value_m265109368(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m3900957011_gshared (KeyValuePair_2_t3953226483 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m3900957011_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t3953226483 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3953226483 *>(__this + 1);
	KeyValuePair_2_set_Value_m3900957011(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2646806735_gshared (KeyValuePair_2_t3953226483 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m2646806735_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IntPtr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t4152991307* G_B2_1 = NULL;
	StringU5BU5D_t4152991307* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t4152991307* G_B1_1 = NULL;
	StringU5BU5D_t4152991307* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t4152991307* G_B3_2 = NULL;
	StringU5BU5D_t4152991307* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t4152991307* G_B5_1 = NULL;
	StringU5BU5D_t4152991307* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t4152991307* G_B4_1 = NULL;
	StringU5BU5D_t4152991307* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t4152991307* G_B6_2 = NULL;
	StringU5BU5D_t4152991307* G_B6_3 = NULL;
	{
		StringU5BU5D_t4152991307* L_0 = (StringU5BU5D_t4152991307*)((StringU5BU5D_t4152991307*)SZArrayNew(StringU5BU5D_t4152991307_il2cpp_TypeInfo_var, (uint32_t)5));
		ArrayElementTypeCheck (L_0, _stringLiteral1230245907);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1230245907);
		StringU5BU5D_t4152991307* L_1 = (StringU5BU5D_t4152991307*)L_0;
		IntPtr_t L_2 = KeyValuePair_2_get_Key_m2986073517((KeyValuePair_2_t3953226483 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		IntPtr_t L_3 = KeyValuePair_2_get_Key_m2986073517((KeyValuePair_2_t3953226483 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (IntPtr_t)L_3;
		String_t* L_4 = IntPtr_ToString_m3680779304((IntPtr_t*)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t4152991307* L_6 = (StringU5BU5D_t4152991307*)G_B3_3;
		ArrayElementTypeCheck (L_6, _stringLiteral1915020316);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1915020316);
		StringU5BU5D_t4152991307* L_7 = (StringU5BU5D_t4152991307*)L_6;
		RuntimeObject * L_8 = KeyValuePair_2_get_Value_m265109368((KeyValuePair_2_t3953226483 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
		if (!L_8)
		{
			G_B5_0 = 3;
			G_B5_1 = L_7;
			G_B5_2 = L_7;
			goto IL_0072;
		}
	}
	{
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m265109368((KeyValuePair_2_t3953226483 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (RuntimeObject *)L_9;
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_1)));
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t4152991307* L_12 = (StringU5BU5D_t4152991307*)G_B6_3;
		ArrayElementTypeCheck (L_12, _stringLiteral147751910);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral147751910);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m3088150928(NULL /*static, unused*/, (StringU5BU5D_t4152991307*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m2646806735_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3953226483 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3953226483 *>(__this + 1);
	return KeyValuePair_2_ToString_m2646806735(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2756558650_gshared (KeyValuePair_2_t2049736611 * __this, RuntimeObject * ___key0, bool ___value1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___key0;
		KeyValuePair_2_set_Key_m4043054412((KeyValuePair_2_t2049736611 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		bool L_1 = ___value1;
		KeyValuePair_2_set_Value_m1733398899((KeyValuePair_2_t2049736611 *)__this, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m2756558650_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___key0, bool ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t2049736611 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2049736611 *>(__this + 1);
	KeyValuePair_2__ctor_m2756558650(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m796298942_gshared (KeyValuePair_2_t2049736611 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m796298942_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2049736611 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2049736611 *>(__this + 1);
	return KeyValuePair_2_get_Key_m796298942(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m4043054412_gshared (KeyValuePair_2_t2049736611 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m4043054412_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2049736611 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2049736611 *>(__this + 1);
	KeyValuePair_2_set_Key_m4043054412(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Value()
extern "C"  bool KeyValuePair_2_get_Value_m632962930_gshared (KeyValuePair_2_t2049736611 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_value_1();
		return L_0;
	}
}
extern "C"  bool KeyValuePair_2_get_Value_m632962930_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2049736611 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2049736611 *>(__this + 1);
	return KeyValuePair_2_get_Value_m632962930(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1733398899_gshared (KeyValuePair_2_t2049736611 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m1733398899_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2049736611 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2049736611 *>(__this + 1);
	KeyValuePair_2_set_Value_m1733398899(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3601648059_gshared (KeyValuePair_2_t2049736611 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m3601648059_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t4152991307* G_B2_1 = NULL;
	StringU5BU5D_t4152991307* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t4152991307* G_B1_1 = NULL;
	StringU5BU5D_t4152991307* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t4152991307* G_B3_2 = NULL;
	StringU5BU5D_t4152991307* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t4152991307* G_B5_1 = NULL;
	StringU5BU5D_t4152991307* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t4152991307* G_B4_1 = NULL;
	StringU5BU5D_t4152991307* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t4152991307* G_B6_2 = NULL;
	StringU5BU5D_t4152991307* G_B6_3 = NULL;
	{
		StringU5BU5D_t4152991307* L_0 = (StringU5BU5D_t4152991307*)((StringU5BU5D_t4152991307*)SZArrayNew(StringU5BU5D_t4152991307_il2cpp_TypeInfo_var, (uint32_t)5));
		ArrayElementTypeCheck (L_0, _stringLiteral1230245907);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1230245907);
		StringU5BU5D_t4152991307* L_1 = (StringU5BU5D_t4152991307*)L_0;
		RuntimeObject * L_2 = KeyValuePair_2_get_Key_m796298942((KeyValuePair_2_t2049736611 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_2)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0039;
		}
	}
	{
		RuntimeObject * L_3 = KeyValuePair_2_get_Key_m796298942((KeyValuePair_2_t2049736611 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (RuntimeObject *)L_3;
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_0)));
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t4152991307* L_6 = (StringU5BU5D_t4152991307*)G_B3_3;
		ArrayElementTypeCheck (L_6, _stringLiteral1915020316);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1915020316);
		StringU5BU5D_t4152991307* L_7 = (StringU5BU5D_t4152991307*)L_6;
		bool L_8 = KeyValuePair_2_get_Value_m632962930((KeyValuePair_2_t2049736611 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		bool L_9 = KeyValuePair_2_get_Value_m632962930((KeyValuePair_2_t2049736611 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (bool)L_9;
		String_t* L_10 = Boolean_ToString_m3304262529((bool*)(&V_1), /*hidden argument*/NULL);
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t4152991307* L_12 = (StringU5BU5D_t4152991307*)G_B6_3;
		ArrayElementTypeCheck (L_12, _stringLiteral147751910);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral147751910);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m3088150928(NULL /*static, unused*/, (StringU5BU5D_t4152991307*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m3601648059_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2049736611 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2049736611 *>(__this + 1);
	return KeyValuePair_2_ToString_m3601648059(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m1853642056_gshared (KeyValuePair_2_t4182910484 * __this, RuntimeObject * ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___key0;
		KeyValuePair_2_set_Key_m1204477076((KeyValuePair_2_t4182910484 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = ___value1;
		KeyValuePair_2_set_Value_m3328533834((KeyValuePair_2_t4182910484 *)__this, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m1853642056_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t4182910484 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t4182910484 *>(__this + 1);
	KeyValuePair_2__ctor_m1853642056(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m2931559392_gshared (KeyValuePair_2_t4182910484 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m2931559392_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t4182910484 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t4182910484 *>(__this + 1);
	return KeyValuePair_2_get_Key_m2931559392(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1204477076_gshared (KeyValuePair_2_t4182910484 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m1204477076_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t4182910484 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t4182910484 *>(__this + 1);
	KeyValuePair_2_set_Key_m1204477076(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m2985363355_gshared (KeyValuePair_2_t4182910484 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_1();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Value_m2985363355_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t4182910484 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t4182910484 *>(__this + 1);
	return KeyValuePair_2_get_Value_m2985363355(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m3328533834_gshared (KeyValuePair_2_t4182910484 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m3328533834_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t4182910484 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t4182910484 *>(__this + 1);
	KeyValuePair_2_set_Value_m3328533834(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3544534171_gshared (KeyValuePair_2_t4182910484 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m3544534171_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t4152991307* G_B2_1 = NULL;
	StringU5BU5D_t4152991307* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t4152991307* G_B1_1 = NULL;
	StringU5BU5D_t4152991307* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t4152991307* G_B3_2 = NULL;
	StringU5BU5D_t4152991307* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t4152991307* G_B5_1 = NULL;
	StringU5BU5D_t4152991307* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t4152991307* G_B4_1 = NULL;
	StringU5BU5D_t4152991307* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t4152991307* G_B6_2 = NULL;
	StringU5BU5D_t4152991307* G_B6_3 = NULL;
	{
		StringU5BU5D_t4152991307* L_0 = (StringU5BU5D_t4152991307*)((StringU5BU5D_t4152991307*)SZArrayNew(StringU5BU5D_t4152991307_il2cpp_TypeInfo_var, (uint32_t)5));
		ArrayElementTypeCheck (L_0, _stringLiteral1230245907);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1230245907);
		StringU5BU5D_t4152991307* L_1 = (StringU5BU5D_t4152991307*)L_0;
		RuntimeObject * L_2 = KeyValuePair_2_get_Key_m2931559392((KeyValuePair_2_t4182910484 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_2)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0039;
		}
	}
	{
		RuntimeObject * L_3 = KeyValuePair_2_get_Key_m2931559392((KeyValuePair_2_t4182910484 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (RuntimeObject *)L_3;
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_0)));
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t4152991307* L_6 = (StringU5BU5D_t4152991307*)G_B3_3;
		ArrayElementTypeCheck (L_6, _stringLiteral1915020316);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1915020316);
		StringU5BU5D_t4152991307* L_7 = (StringU5BU5D_t4152991307*)L_6;
		int32_t L_8 = KeyValuePair_2_get_Value_m2985363355((KeyValuePair_2_t4182910484 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		int32_t L_9 = KeyValuePair_2_get_Value_m2985363355((KeyValuePair_2_t4182910484 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (int32_t)L_9;
		String_t* L_10 = Int32_ToString_m1382790325((int32_t*)(&V_1), /*hidden argument*/NULL);
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t4152991307* L_12 = (StringU5BU5D_t4152991307*)G_B6_3;
		ArrayElementTypeCheck (L_12, _stringLiteral147751910);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral147751910);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m3088150928(NULL /*static, unused*/, (StringU5BU5D_t4152991307*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m3544534171_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t4182910484 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t4182910484 *>(__this + 1);
	return KeyValuePair_2_ToString_m3544534171(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m4072285412_gshared (KeyValuePair_2_t2990668001 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___key0;
		KeyValuePair_2_set_Key_m2646310514((KeyValuePair_2_t2990668001 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RuntimeObject * L_1 = ___value1;
		KeyValuePair_2_set_Value_m3816633359((KeyValuePair_2_t2990668001 *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m4072285412_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t2990668001 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2990668001 *>(__this + 1);
	KeyValuePair_2__ctor_m4072285412(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m2348436013_gshared (KeyValuePair_2_t2990668001 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m2348436013_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2990668001 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2990668001 *>(__this + 1);
	return KeyValuePair_2_get_Key_m2348436013(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2646310514_gshared (KeyValuePair_2_t2990668001 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m2646310514_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2990668001 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2990668001 *>(__this + 1);
	KeyValuePair_2_set_Key_m2646310514(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m2175122682_gshared (KeyValuePair_2_t2990668001 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m2175122682_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2990668001 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2990668001 *>(__this + 1);
	return KeyValuePair_2_get_Value_m2175122682(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m3816633359_gshared (KeyValuePair_2_t2990668001 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m3816633359_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2990668001 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2990668001 *>(__this + 1);
	KeyValuePair_2_set_Value_m3816633359(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2879505104_gshared (KeyValuePair_2_t2990668001 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m2879505104_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t4152991307* G_B2_1 = NULL;
	StringU5BU5D_t4152991307* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t4152991307* G_B1_1 = NULL;
	StringU5BU5D_t4152991307* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t4152991307* G_B3_2 = NULL;
	StringU5BU5D_t4152991307* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t4152991307* G_B5_1 = NULL;
	StringU5BU5D_t4152991307* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t4152991307* G_B4_1 = NULL;
	StringU5BU5D_t4152991307* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t4152991307* G_B6_2 = NULL;
	StringU5BU5D_t4152991307* G_B6_3 = NULL;
	{
		StringU5BU5D_t4152991307* L_0 = (StringU5BU5D_t4152991307*)((StringU5BU5D_t4152991307*)SZArrayNew(StringU5BU5D_t4152991307_il2cpp_TypeInfo_var, (uint32_t)5));
		ArrayElementTypeCheck (L_0, _stringLiteral1230245907);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1230245907);
		StringU5BU5D_t4152991307* L_1 = (StringU5BU5D_t4152991307*)L_0;
		RuntimeObject * L_2 = KeyValuePair_2_get_Key_m2348436013((KeyValuePair_2_t2990668001 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_2)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0039;
		}
	}
	{
		RuntimeObject * L_3 = KeyValuePair_2_get_Key_m2348436013((KeyValuePair_2_t2990668001 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (RuntimeObject *)L_3;
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_0)));
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t4152991307* L_6 = (StringU5BU5D_t4152991307*)G_B3_3;
		ArrayElementTypeCheck (L_6, _stringLiteral1915020316);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1915020316);
		StringU5BU5D_t4152991307* L_7 = (StringU5BU5D_t4152991307*)L_6;
		RuntimeObject * L_8 = KeyValuePair_2_get_Value_m2175122682((KeyValuePair_2_t2990668001 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
		if (!L_8)
		{
			G_B5_0 = 3;
			G_B5_1 = L_7;
			G_B5_2 = L_7;
			goto IL_0072;
		}
	}
	{
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m2175122682((KeyValuePair_2_t2990668001 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (RuntimeObject *)L_9;
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_1)));
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t4152991307* L_12 = (StringU5BU5D_t4152991307*)G_B6_3;
		ArrayElementTypeCheck (L_12, _stringLiteral147751910);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral147751910);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m3088150928(NULL /*static, unused*/, (StringU5BU5D_t4152991307*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m2879505104_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2990668001 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2990668001 *>(__this + 1);
	return KeyValuePair_2_ToString_m2879505104(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Timeline.TimelinePlayable/ConnectionCache>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3831787988_gshared (KeyValuePair_2_t575448181 * __this, RuntimeObject * ___key0, ConnectionCache_t4199187649  ___value1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___key0;
		KeyValuePair_2_set_Key_m460644162((KeyValuePair_2_t575448181 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ConnectionCache_t4199187649  L_1 = ___value1;
		KeyValuePair_2_set_Value_m2153222660((KeyValuePair_2_t575448181 *)__this, (ConnectionCache_t4199187649 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m3831787988_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___key0, ConnectionCache_t4199187649  ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t575448181 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t575448181 *>(__this + 1);
	KeyValuePair_2__ctor_m3831787988(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Timeline.TimelinePlayable/ConnectionCache>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m719357593_gshared (KeyValuePair_2_t575448181 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m719357593_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t575448181 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t575448181 *>(__this + 1);
	return KeyValuePair_2_get_Key_m719357593(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Timeline.TimelinePlayable/ConnectionCache>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m460644162_gshared (KeyValuePair_2_t575448181 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m460644162_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t575448181 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t575448181 *>(__this + 1);
	KeyValuePair_2_set_Key_m460644162(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Timeline.TimelinePlayable/ConnectionCache>::get_Value()
extern "C"  ConnectionCache_t4199187649  KeyValuePair_2_get_Value_m2994858808_gshared (KeyValuePair_2_t575448181 * __this, const RuntimeMethod* method)
{
	{
		ConnectionCache_t4199187649  L_0 = (ConnectionCache_t4199187649 )__this->get_value_1();
		return L_0;
	}
}
extern "C"  ConnectionCache_t4199187649  KeyValuePair_2_get_Value_m2994858808_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t575448181 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t575448181 *>(__this + 1);
	return KeyValuePair_2_get_Value_m2994858808(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Timeline.TimelinePlayable/ConnectionCache>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m2153222660_gshared (KeyValuePair_2_t575448181 * __this, ConnectionCache_t4199187649  ___value0, const RuntimeMethod* method)
{
	{
		ConnectionCache_t4199187649  L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m2153222660_AdjustorThunk (RuntimeObject * __this, ConnectionCache_t4199187649  ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t575448181 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t575448181 *>(__this + 1);
	KeyValuePair_2_set_Value_m2153222660(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Timeline.TimelinePlayable/ConnectionCache>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1687193337_gshared (KeyValuePair_2_t575448181 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m1687193337_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	ConnectionCache_t4199187649  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t G_B2_0 = 0;
	StringU5BU5D_t4152991307* G_B2_1 = NULL;
	StringU5BU5D_t4152991307* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t4152991307* G_B1_1 = NULL;
	StringU5BU5D_t4152991307* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t4152991307* G_B3_2 = NULL;
	StringU5BU5D_t4152991307* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t4152991307* G_B5_1 = NULL;
	StringU5BU5D_t4152991307* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t4152991307* G_B4_1 = NULL;
	StringU5BU5D_t4152991307* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t4152991307* G_B6_2 = NULL;
	StringU5BU5D_t4152991307* G_B6_3 = NULL;
	{
		StringU5BU5D_t4152991307* L_0 = (StringU5BU5D_t4152991307*)((StringU5BU5D_t4152991307*)SZArrayNew(StringU5BU5D_t4152991307_il2cpp_TypeInfo_var, (uint32_t)5));
		ArrayElementTypeCheck (L_0, _stringLiteral1230245907);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1230245907);
		StringU5BU5D_t4152991307* L_1 = (StringU5BU5D_t4152991307*)L_0;
		RuntimeObject * L_2 = KeyValuePair_2_get_Key_m719357593((KeyValuePair_2_t575448181 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_2)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0039;
		}
	}
	{
		RuntimeObject * L_3 = KeyValuePair_2_get_Key_m719357593((KeyValuePair_2_t575448181 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (RuntimeObject *)L_3;
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_0)));
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t4152991307* L_6 = (StringU5BU5D_t4152991307*)G_B3_3;
		ArrayElementTypeCheck (L_6, _stringLiteral1915020316);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1915020316);
		StringU5BU5D_t4152991307* L_7 = (StringU5BU5D_t4152991307*)L_6;
		ConnectionCache_t4199187649  L_8 = KeyValuePair_2_get_Value_m2994858808((KeyValuePair_2_t575448181 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		ConnectionCache_t4199187649  L_9 = KeyValuePair_2_get_Value_m2994858808((KeyValuePair_2_t575448181 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (ConnectionCache_t4199187649 )L_9;
		RuntimeObject * L_10 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1));
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_10);
		*(&V_1) = *(ConnectionCache_t4199187649 *)UnBox(L_10);
		G_B6_0 = L_11;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_12;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t4152991307* L_13 = (StringU5BU5D_t4152991307*)G_B6_3;
		ArrayElementTypeCheck (L_13, _stringLiteral147751910);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral147751910);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m3088150928(NULL /*static, unused*/, (StringU5BU5D_t4152991307*)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m1687193337_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t575448181 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t575448181 *>(__this + 1);
	return KeyValuePair_2_ToString_m1687193337(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
