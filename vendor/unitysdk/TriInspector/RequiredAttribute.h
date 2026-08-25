#pragma once
#include "../unitysdk.h"

#define TRIINSPECTOR_REQUIREDATTRIBUTE_GET_FIXACTIONNAME_OFFSET UNITYSDK_OFFSET(0x9DCF350)
#define TRIINSPECTOR_REQUIREDATTRIBUTE_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x9DCF360)
#define TRIINSPECTOR_REQUIREDATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCF370)
#define TRIINSPECTOR_REQUIREDATTRIBUTE_SET_FIXACTION_OFFSET UNITYSDK_OFFSET(0x9DCF380)
#define TRIINSPECTOR_REQUIREDATTRIBUTE_SET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x9DCF390)
#define TRIINSPECTOR_REQUIREDATTRIBUTE_SET_FIXACTIONNAME_OFFSET UNITYSDK_OFFSET(0x9DCF3A0)
#define TRIINSPECTOR_REQUIREDATTRIBUTE_GET_FIXACTION_OFFSET UNITYSDK_OFFSET(0x9DCF3B0)

namespace TriInspector
{
	inline static constexpr unsigned int RequiredAttribute_TypeDefinitionIndex = 37849;

	class RequiredAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _Message_k__BackingField; // 0x10
		::System::String* _FixAction_k__BackingField; // 0x18
		::System::String* _FixActionName_k__BackingField; // 0x20

		::System::String* get_FixActionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_REQUIREDATTRIBUTE_GET_FIXACTIONNAME_OFFSET))(nullptr);
		}

		::System::String* get_Message()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_REQUIREDATTRIBUTE_GET_MESSAGE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_REQUIREDATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_FixAction(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_REQUIREDATTRIBUTE_SET_FIXACTION_OFFSET))(str, nullptr);
		}

		::System::Void set_Message(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_REQUIREDATTRIBUTE_SET_MESSAGE_OFFSET))(str, nullptr);
		}

		::System::Void set_FixActionName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_REQUIREDATTRIBUTE_SET_FIXACTIONNAME_OFFSET))(str, nullptr);
		}

		::System::String* get_FixAction()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_REQUIREDATTRIBUTE_GET_FIXACTION_OFFSET))(nullptr);
		}

	};
}

