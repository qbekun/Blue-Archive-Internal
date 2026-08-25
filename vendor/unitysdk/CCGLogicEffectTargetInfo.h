#pragma once
#include "unitysdk.h"

#define CCGLOGICEFFECTTARGETINFO_GET_TARGETENTITYID_OFFSET UNITYSDK_OFFSET(0x1DCC7F0)
#define CCGLOGICEFFECTTARGETINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DCC800)
#define CCGLOGICEFFECTTARGETINFO_GET_TARGETACTIVECOST_OFFSET UNITYSDK_OFFSET(0x1DCC8B0)
#define CCGLOGICEFFECTTARGETINFO_SET_TARGETACTIVECOST_OFFSET UNITYSDK_OFFSET(0x1DCC8C0)
#define CCGLOGICEFFECTTARGETINFO_SET_STACK_OFFSET UNITYSDK_OFFSET(0x1DCC8D0)
#define CCGLOGICEFFECTTARGETINFO_GET_STACK_OFFSET UNITYSDK_OFFSET(0x1DCC8E0)
#define CCGLOGICEFFECTTARGETINFO_SET_TARGETENTITYID_OFFSET UNITYSDK_OFFSET(0x1DCC8F0)

	inline static constexpr unsigned int CCGLogicEffectTargetInfo_TypeDefinitionIndex = 20533;

	class CCGLogicEffectTargetInfo : public Il2CppObject
	{
	public:
		::System::Int32 _TargetEntityId_k__BackingField; // 0x10
		::System::Int32 _TargetActiveCost_k__BackingField; // 0x14
		::System::Int32 _Stack_k__BackingField; // 0x18

		::System::Int32 get_TargetEntityId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGLOGICEFFECTTARGETINFO_GET_TARGETENTITYID_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGLOGICEFFECTTARGETINFO_TOSTRING_OFFSET))(nullptr);
		}

		::System::Int32 get_TargetActiveCost()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGLOGICEFFECTTARGETINFO_GET_TARGETACTIVECOST_OFFSET))(nullptr);
		}

		::System::Void set_TargetActiveCost(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CCGLOGICEFFECTTARGETINFO_SET_TARGETACTIVECOST_OFFSET))(arg, nullptr);
		}

		::System::Void set_Stack(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CCGLOGICEFFECTTARGETINFO_SET_STACK_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Stack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGLOGICEFFECTTARGETINFO_GET_STACK_OFFSET))(nullptr);
		}

		::System::Void set_TargetEntityId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CCGLOGICEFFECTTARGETINFO_SET_TARGETENTITYID_OFFSET))(arg, nullptr);
		}

	};

