#pragma once
#include "../unitysdk.h"

namespace TriInspector { class TriMessageType; }
namespace UnityEngine { class GUIContent; }
namespace TriInspector { class TriValidationResult; }

#define TRIINSPECTOR_TRIVALIDATIONRESULT_INFO_OFFSET UNITYSDK_OFFSET(0x9DCF640)
#define TRIINSPECTOR_TRIVALIDATIONRESULT_WARNING_OFFSET UNITYSDK_OFFSET(0x9DCF710)
#define TRIINSPECTOR_TRIVALIDATIONRESULT_GET_FIXACTION_OFFSET UNITYSDK_OFFSET(0x9DCF780)
#define TRIINSPECTOR_TRIVALIDATIONRESULT_GET_MESSAGETYPE_OFFSET UNITYSDK_OFFSET(0x9DCF790)
#define TRIINSPECTOR_TRIVALIDATIONRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCF6B0)
#define TRIINSPECTOR_TRIVALIDATIONRESULT_WITHFIX_OFFSET UNITYSDK_OFFSET(0x9DCF7A0)
#define TRIINSPECTOR_TRIVALIDATIONRESULT_GET_VALID_OFFSET UNITYSDK_OFFSET(0x9DCF8D0)
#define TRIINSPECTOR_TRIVALIDATIONRESULT_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x9DCF940)
#define TRIINSPECTOR_TRIVALIDATIONRESULT_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x9DCF950)
#define TRIINSPECTOR_TRIVALIDATIONRESULT_ERROR_OFFSET UNITYSDK_OFFSET(0x9DCF960)
#define TRIINSPECTOR_TRIVALIDATIONRESULT_GET_FIXACTIONCONTENT_OFFSET UNITYSDK_OFFSET(0x9DCF9D0)

namespace TriInspector
{
	inline static constexpr unsigned int TriValidationResult_TypeDefinitionIndex = 37867;

	class TriValidationResult : public Il2CppObject
	{
	public:
		::System::Boolean _IsValid_k__BackingField; // 0x10
		::System::String* _Message_k__BackingField; // 0x18
		::TriInspector::TriMessageType* _MessageType_k__BackingField; // 0x20
		::System::Action* _FixAction_k__BackingField; // 0x28
		::UnityEngine::GUIContent* _FixActionContent_k__BackingField; // 0x30

		::TriInspector::TriValidationResult* Info(::System::String* str)
		{
			return (return (::TriInspector::TriValidationResult*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_TRIVALIDATIONRESULT_INFO_OFFSET))(str, nullptr);
		}

		::TriInspector::TriValidationResult* Warning(::System::String* str)
		{
			return (return (::TriInspector::TriValidationResult*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_TRIVALIDATIONRESULT_WARNING_OFFSET))(str, nullptr);
		}

		::System::Action* get_FixAction()
		{
			return (return (::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_TRIVALIDATIONRESULT_GET_FIXACTION_OFFSET))(nullptr);
		}

		::TriInspector::TriMessageType* get_MessageType()
		{
			return (return (::TriInspector::TriMessageType*(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_TRIVALIDATIONRESULT_GET_MESSAGETYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Boolean arg, ::System::String* str, ::TriInspector::TriMessageType* arg, ::System::Action* arg, ::UnityEngine::GUIContent* arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::String*, ::TriInspector::TriMessageType*, ::System::Action*, ::UnityEngine::GUIContent*, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_TRIVALIDATIONRESULT_.CTOR_OFFSET))(arg, str, arg, arg, arg, nullptr);
		}

		::TriInspector::TriValidationResult* WithFix(::System::Action* arg, ::System::String* str)
		{
			return (return (::TriInspector::TriValidationResult*(*)(::System::Action*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_TRIVALIDATIONRESULT_WITHFIX_OFFSET))(arg, str, nullptr);
		}

		::TriInspector::TriValidationResult* get_Valid()
		{
			return (return (::TriInspector::TriValidationResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_TRIVALIDATIONRESULT_GET_VALID_OFFSET))(nullptr);
		}

		::System::String* get_Message()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_TRIVALIDATIONRESULT_GET_MESSAGE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_TRIVALIDATIONRESULT_GET_ISVALID_OFFSET))(nullptr);
		}

		::TriInspector::TriValidationResult* Error(::System::String* str)
		{
			return (return (::TriInspector::TriValidationResult*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_TRIVALIDATIONRESULT_ERROR_OFFSET))(str, nullptr);
		}

		::UnityEngine::GUIContent* get_FixActionContent()
		{
			return (return (::UnityEngine::GUIContent*(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_TRIVALIDATIONRESULT_GET_FIXACTIONCONTENT_OFFSET))(nullptr);
		}

	};
}

