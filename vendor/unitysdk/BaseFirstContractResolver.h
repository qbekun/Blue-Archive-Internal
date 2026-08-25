#pragma once
#include "unitysdk.h"

class BaseFirstContractResolver;
namespace Newtonsoft::Json { class MemberSerialization; }

#define BASEFIRSTCONTRACTRESOLVER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1016340)
#define BASEFIRSTCONTRACTRESOLVER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1016390)
#define BASEFIRSTCONTRACTRESOLVER_CREATEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x10163E0)
#define BASEFIRSTCONTRACTRESOLVER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1016540)

	inline static constexpr unsigned int BaseFirstContractResolver_TypeDefinitionIndex = 12778;

	class BaseFirstContractResolver : public Il2CppObject
	{
	public:
		BaseFirstContractResolver* instance; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BASEFIRSTCONTRACTRESOLVER_.CTOR_OFFSET))(nullptr);
		}

		BaseFirstContractResolver* get_Instance()
		{
			return ((BaseFirstContractResolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + BASEFIRSTCONTRACTRESOLVER_GET_INSTANCE_OFFSET))(nullptr);
		}

		Il2CppObject* CreateProperties(::System::Type* arg, ::Newtonsoft::Json::MemberSerialization* arg2)
		{
			return ((Il2CppObject*(*)(::System::Type*, ::Newtonsoft::Json::MemberSerialization*, ::PVOID))((::PBYTE)hIl2Cpp + BASEFIRSTCONTRACTRESOLVER_CREATEPROPERTIES_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BASEFIRSTCONTRACTRESOLVER_.CCTOR_OFFSET))(nullptr);
		}

	};

