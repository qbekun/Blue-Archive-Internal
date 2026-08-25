#pragma once
#include "unitysdk.h"

#define DELEGATEINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA0E42C0)
#define DELEGATEINFO_INVOKE_OFFSET UNITYSDK_OFFSET(0xA0E3CB0)
#define DELEGATEINFO_GET_INVOCATIONTIME_OFFSET UNITYSDK_OFFSET(0xA0E47F0)
#define DELEGATEINFO_SET_INVOCATIONTIME_OFFSET UNITYSDK_OFFSET(0xA0E4800)
#define DELEGATEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0E38E0)

	inline static constexpr unsigned int DelegateInfo_TypeDefinitionIndex = 36365;

	class DelegateInfo : public Il2CppObject
	{
	public:
		::System::Int32 s_Id; // 0x0
		::System::Int32 m_Id; // 0x10
		::System::Delegate* m_Delegate; // 0x18
		::Il2CppArray<::System::Object*>* m_Target; // 0x20
		::System::Single _InvocationTime_k__BackingField; // 0x28

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DELEGATEINFO_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void Invoke()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DELEGATEINFO_INVOKE_OFFSET))(nullptr);
		}

		::System::Single get_InvocationTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DELEGATEINFO_GET_INVOCATIONTIME_OFFSET))(nullptr);
		}

		::System::Void set_InvocationTime(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + DELEGATEINFO_SET_INVOCATIONTIME_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Delegate* arg, ::System::Single arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Delegate*, ::System::Single, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + DELEGATEINFO_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};

