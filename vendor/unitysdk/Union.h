#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json::Utilities { class FSharpFunction; }

#define UNION_.CTOR_OFFSET UNITYSDK_OFFSET(0x952F6E0)

	inline static constexpr unsigned int Union_TypeDefinitionIndex = 32091;

	class Union : public Il2CppObject
	{
	public:
		::Newtonsoft::Json::Utilities::FSharpFunction* TagReader; // 0x10
		Il2CppObject* Cases; // 0x18

		::System::Void .ctor(::Newtonsoft::Json::Utilities::FSharpFunction* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Utilities::FSharpFunction*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

