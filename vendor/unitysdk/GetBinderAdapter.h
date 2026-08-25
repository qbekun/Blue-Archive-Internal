#pragma once
#include "unitysdk.h"

#define GETBINDERADAPTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define GETBINDERADAPTER_FALLBACKGETMEMBER_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int GetBinderAdapter_TypeDefinitionIndex = 31831;

	class GetBinderAdapter : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Dynamic::InvokeMemberBinder* arg)
		{
			((::System::Void(*)(::System::Dynamic::InvokeMemberBinder*, ::PVOID))((::PBYTE)hIl2Cpp + GETBINDERADAPTER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* FallbackGetMember(::System::Dynamic::DynamicMetaObject* arg, ::System::Dynamic::DynamicMetaObject* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObject*, ::System::Dynamic::DynamicMetaObject*, ::PVOID))((::PBYTE)hIl2Cpp + GETBINDERADAPTER_FALLBACKGETMEMBER_OFFSET))(arg, arg, nullptr);
		}

	};

