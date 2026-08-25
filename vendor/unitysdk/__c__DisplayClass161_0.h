#pragma once
#include "unitysdk.h"

namespace NPA::InfaceSDK { class Inface; }
namespace NPA::SimpleJSON { class JSONNode; }

#define <>C__DISPLAYCLASS161_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CFAAF0)
#define <>C__DISPLAYCLASS161_0__GAMEAUTHLOGIN_B__0_OFFSET UNITYSDK_OFFSET(0x9CFAB00)

	inline static constexpr unsigned int <>c__DisplayClass161_0_TypeDefinitionIndex = 25821;

	class <>c__DisplayClass161_0 : public Il2CppObject
	{
	public:
		::NPA::InfaceSDK::Inface* __4__this; // 0x10
		Il2CppObject* action; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS161_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _GameAuthLogin_b__0(::NPA::SimpleJSON::JSONNode* arg)
		{
			((::System::Void(*)(::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS161_0__GAMEAUTHLOGIN_B__0_OFFSET))(arg, nullptr);
		}

	};

