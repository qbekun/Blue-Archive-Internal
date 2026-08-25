#pragma once
#include "../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder { class CSharpArgumentInfo; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_ARGUMENTOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9080020)

namespace Microsoft::CSharp::RuntimeBinder
{
	inline static constexpr unsigned int ArgumentObject_TypeDefinitionIndex = 34422;

	class ArgumentObject : public Il2CppObject
	{
	public:
		::System::Object* Value; // 0x10
		::Microsoft::CSharp::RuntimeBinder::CSharpArgumentInfo* Info; // 0x18
		::System::Type* Type; // 0x20

		::System::Void .ctor(::System::Object* arg, ::Microsoft::CSharp::RuntimeBinder::CSharpArgumentInfo* arg, ::System::Type* arg)
		{
			((::System::Void(*)(::System::Object*, ::Microsoft::CSharp::RuntimeBinder::CSharpArgumentInfo*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ARGUMENTOBJECT_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

