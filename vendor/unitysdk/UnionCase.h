#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json::Utilities { class FSharpFunction; }

#define UNIONCASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x952F730)

	inline static constexpr unsigned int UnionCase_TypeDefinitionIndex = 32092;

	class UnionCase : public Il2CppObject
	{
	public:
		::System::Int32 Tag; // 0x10
		::System::String* Name; // 0x18
		::Il2CppArray<::System::Object*>* Fields; // 0x20
		::Newtonsoft::Json::Utilities::FSharpFunction* FieldReader; // 0x28
		::Newtonsoft::Json::Utilities::FSharpFunction* Constructor; // 0x30

		::System::Void .ctor(::System::Int32 arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::Newtonsoft::Json::Utilities::FSharpFunction* arg, ::Newtonsoft::Json::Utilities::FSharpFunction* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::Il2CppArray<::System::Object*>*, ::Newtonsoft::Json::Utilities::FSharpFunction*, ::Newtonsoft::Json::Utilities::FSharpFunction*, ::PVOID))((::PBYTE)hIl2Cpp + UNIONCASE_.CTOR_OFFSET))(arg, str, arg, arg, arg, nullptr);
		}

	};

