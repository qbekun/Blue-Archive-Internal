#pragma once
#include "unitysdk.h"

#define SR_FORMAT_OFFSET UNITYSDK_OFFSET(0x980C180)
#define SR_FORMAT_OFFSET UNITYSDK_OFFSET(0x980C1E0)

	inline static constexpr unsigned int SR_TypeDefinitionIndex = 38050;

	class SR : public Il2CppObject
	{
	public:
		::System::String* Format(::System::String* str, ::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SR_FORMAT_OFFSET))(str, arg, nullptr);
		}

		::System::String* Format(::System::String* str, ::System::Object* arg, ::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Object*, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SR_FORMAT_OFFSET))(str, arg, arg, arg, nullptr);
		}

	};

