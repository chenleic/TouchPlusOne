#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>



// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

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
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

extern "C" void DEFAULT_CALL ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_m0045E44F7E960D6B4A864D5206D4116249C09BB0(intptr_t ___arg0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SkillzProgressionProxy_progressionGetFailureCallback_m201BFEBBEEA6B394F99E37EBD1E22E01E218DD7D(int32_t ___requestId0, char* ___errorString1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SkillzProgressionProxy_progressionGetSuccessCallback_mEEE2B24CE182CEE498434B3BE5FA84FA1FFBF7FD(int32_t ___requestId0, char* ___dataJSON1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SkillzProgressionProxy_progressionUpdateFailureCallback_m769FE07094047A7062E0DF9B65B3EB653E1BE537(int32_t ___requestId0, char* ___errorString1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SkillzProgressionProxy_progressionUpdateSuccessCallback_m5FB67E56CEA97932C59BE44ADF10836DC5AF7424(int32_t ___requestId0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SkillzSDKProxy_submitScoreFailureCallback_m3C76C2FBE3BB2FE1AB7BAB06C33C34BAAD87D4EA(char* ___errorString0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SkillzSDKProxy_submitScoreSuccessCallback_m2F7E80117B6DF5A39F40758055081E1C06D7DEF7();
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SkillzSyncProxy_onCurrentPlayerHasLeftMatch_m94A3F7FA5A306097C233C026A130831EA8A4E00E();
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SkillzSyncProxy_onCurrentPlayerHasLostConnection_mCF2F1EB0FCE8B5B799C0A0EEF6C2040FB6596C1B();
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SkillzSyncProxy_onCurrentPlayerHasReconnected_m3E5850D810E1451D34D9A3448FA9CE5E7F9A91C4();
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SkillzSyncProxy_onDidReceiveData_mBD7A789EEB03F9C4E03703092777C4D8CF95A195(intptr_t ___value0, uint64_t ___length1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SkillzSyncProxy_onMatchCompleted_m16FC512B96C9E67049CCCF3B02979383FA7B0B0A();
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SkillzSyncProxy_onOpponentHasLeftMatch_mE7FFFF6D554E91A1C8E72CF99EB3417131C369F7(uint64_t ___playerId0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SkillzSyncProxy_onOpponentHasLostConnection_mE622F8EC2623C4C754642559375C64BEA38F83BC(uint64_t ___playerId0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SkillzSyncProxy_onOpponentHasReconnected_mB9F604263DC96E7D38444FE048A2AF56EBF9036C(uint64_t ___playerId0);


IL2CPP_EXTERN_C const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[];
const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[15] = 
{
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_m0045E44F7E960D6B4A864D5206D4116249C09BB0),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SkillzProgressionProxy_progressionGetFailureCallback_m201BFEBBEEA6B394F99E37EBD1E22E01E218DD7D),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SkillzProgressionProxy_progressionGetSuccessCallback_mEEE2B24CE182CEE498434B3BE5FA84FA1FFBF7FD),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SkillzProgressionProxy_progressionUpdateFailureCallback_m769FE07094047A7062E0DF9B65B3EB653E1BE537),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SkillzProgressionProxy_progressionUpdateSuccessCallback_m5FB67E56CEA97932C59BE44ADF10836DC5AF7424),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SkillzSDKProxy_submitScoreFailureCallback_m3C76C2FBE3BB2FE1AB7BAB06C33C34BAAD87D4EA),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SkillzSDKProxy_submitScoreSuccessCallback_m2F7E80117B6DF5A39F40758055081E1C06D7DEF7),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SkillzSyncProxy_onCurrentPlayerHasLeftMatch_m94A3F7FA5A306097C233C026A130831EA8A4E00E),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SkillzSyncProxy_onCurrentPlayerHasLostConnection_mCF2F1EB0FCE8B5B799C0A0EEF6C2040FB6596C1B),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SkillzSyncProxy_onCurrentPlayerHasReconnected_m3E5850D810E1451D34D9A3448FA9CE5E7F9A91C4),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SkillzSyncProxy_onDidReceiveData_mBD7A789EEB03F9C4E03703092777C4D8CF95A195),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SkillzSyncProxy_onMatchCompleted_m16FC512B96C9E67049CCCF3B02979383FA7B0B0A),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SkillzSyncProxy_onOpponentHasLeftMatch_mE7FFFF6D554E91A1C8E72CF99EB3417131C369F7),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SkillzSyncProxy_onOpponentHasLostConnection_mE622F8EC2623C4C754642559375C64BEA38F83BC),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SkillzSyncProxy_onOpponentHasReconnected_mB9F604263DC96E7D38444FE048A2AF56EBF9036C),
};
