#pragma once
#include "../unitysdk.h"

#define TRIINSPECTOR_ENABLEIFATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCE9E0)
#define TRIINSPECTOR_ENABLEIFATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCEA60)

namespace TriInspector
{
	inline static constexpr unsigned int EnableIfAttribute_TypeDefinitionIndex = 37823;

	class EnableIfAttribute : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_ENABLEIFATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_ENABLEIFATTRIBUTE_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};
}

