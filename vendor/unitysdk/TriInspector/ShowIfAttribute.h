#pragma once
#include "../unitysdk.h"

#define TRIINSPECTOR_SHOWIFATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCF3F0)
#define TRIINSPECTOR_SHOWIFATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCF470)

namespace TriInspector
{
	inline static constexpr unsigned int ShowIfAttribute_TypeDefinitionIndex = 37853;

	class ShowIfAttribute : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_SHOWIFATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_SHOWIFATTRIBUTE_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};
}

