#pragma once
#include "unitysdk.h"

#define MESSAGEPOPUPPAYLOAD_GET_CONDITIONS_OFFSET UNITYSDK_OFFSET(0x277BD00)
#define MESSAGEPOPUPPAYLOAD_SET_CONDITIONS_OFFSET UNITYSDK_OFFSET(0x277BD10)
#define MESSAGEPOPUPPAYLOAD_.CTOR_OFFSET UNITYSDK_OFFSET(0x277BD20)

	inline static constexpr unsigned int MessagePopupPayload_TypeDefinitionIndex = 7361;

	class MessagePopupPayload : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _Conditions_k__BackingField; // 0x10

		::Il2CppArray<::System::Object*>* get_Conditions()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPOPUPPAYLOAD_GET_CONDITIONS_OFFSET))(nullptr);
		}

		::System::Void set_Conditions(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPOPUPPAYLOAD_SET_CONDITIONS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPOPUPPAYLOAD_.CTOR_OFFSET))(nullptr);
		}

	};

