#pragma once
#include "unitysdk.h"

#define CONDITIONPAYLOAD_GET_USE_OFFSET UNITYSDK_OFFSET(0x277BD30)
#define CONDITIONPAYLOAD_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x277BD40)
#define CONDITIONPAYLOAD_GET_ARGS_OFFSET UNITYSDK_OFFSET(0x277BD50)
#define CONDITIONPAYLOAD_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x277BD60)
#define CONDITIONPAYLOAD_.CTOR_OFFSET UNITYSDK_OFFSET(0x277BD70)
#define CONDITIONPAYLOAD_SET_USE_OFFSET UNITYSDK_OFFSET(0x277BDB0)
#define CONDITIONPAYLOAD_SET_ARGS_OFFSET UNITYSDK_OFFSET(0x277BDC0)

	inline static constexpr unsigned int ConditionPayload_TypeDefinitionIndex = 7360;

	class ConditionPayload : public Il2CppObject
	{
	public:
		::System::Boolean _Use_k__BackingField; // 0x10
		::System::Boolean _IsUnlocked_k__BackingField; // 0x11
		::Il2CppArray<::System::Object*>* _Args_k__BackingField; // 0x18

		::System::Boolean get_Use()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONDITIONPAYLOAD_GET_USE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONDITIONPAYLOAD_GET_ISUNLOCKED_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Args()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONDITIONPAYLOAD_GET_ARGS_OFFSET))(nullptr);
		}

		::System::Void set_IsUnlocked(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CONDITIONPAYLOAD_SET_ISUNLOCKED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Boolean arg, ::System::Boolean arg2, ::Il2CppArray<::System::Object*>* arg3)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CONDITIONPAYLOAD_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void set_Use(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CONDITIONPAYLOAD_SET_USE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Args(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CONDITIONPAYLOAD_SET_ARGS_OFFSET))(arg, nullptr);
		}

	};

