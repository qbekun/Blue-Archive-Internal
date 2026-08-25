#pragma once
#include "../unitysdk.h"

#define MONO_RUNTIME_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9120D00)

namespace Mono
{
	inline static constexpr unsigned int Runtime_TypeDefinitionIndex = 23569;

	class Runtime : public Il2CppObject
	{
	public:
		::System::Object* dump; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIME_.CCTOR_OFFSET))(nullptr);
		}

	};
}

