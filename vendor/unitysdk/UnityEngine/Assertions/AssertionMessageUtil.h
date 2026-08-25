#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_ASSERTIONS_ASSERTIONMESSAGEUTIL_GETMESSAGE_OFFSET UNITYSDK_OFFSET(0xA272500)
#define UNITYENGINE_ASSERTIONS_ASSERTIONMESSAGEUTIL_GETMESSAGE_OFFSET UNITYSDK_OFFSET(0xA272610)
#define UNITYENGINE_ASSERTIONS_ASSERTIONMESSAGEUTIL_GETEQUALITYMESSAGE_OFFSET UNITYSDK_OFFSET(0xA271DF0)
#define UNITYENGINE_ASSERTIONS_ASSERTIONMESSAGEUTIL_NULLFAILUREMESSAGE_OFFSET UNITYSDK_OFFSET(0xA2721A0)
#define UNITYENGINE_ASSERTIONS_ASSERTIONMESSAGEUTIL_BOOLEANFAILUREMESSAGE_OFFSET UNITYSDK_OFFSET(0xA271C50)

namespace UnityEngine::Assertions
{
	inline static constexpr unsigned int AssertionMessageUtil_TypeDefinitionIndex = 31658;

	class AssertionMessageUtil : public Il2CppObject
	{
	public:
		::System::String* GetMessage(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERTIONMESSAGEUTIL_GETMESSAGE_OFFSET))(str, nullptr);
		}

		::System::String* GetMessage(::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERTIONMESSAGEUTIL_GETMESSAGE_OFFSET))(str, str, nullptr);
		}

		::System::String* GetEqualityMessage(::System::Object* arg, ::System::Object* arg, ::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERTIONMESSAGEUTIL_GETEQUALITYMESSAGE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* NullFailureMessage(::System::Object* arg, ::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERTIONMESSAGEUTIL_NULLFAILUREMESSAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::String* BooleanFailureMessage(::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERTIONMESSAGEUTIL_BOOLEANFAILUREMESSAGE_OFFSET))(arg, nullptr);
		}

	};
}

