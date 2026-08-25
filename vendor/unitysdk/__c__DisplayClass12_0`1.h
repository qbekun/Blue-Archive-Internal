#pragma once
#include "unitysdk.h"

namespace NPA::Editor::Network { class NXPRequest; }
namespace NPA::Editor::Network { class NXPToyBoltRequestManager; }
namespace NPA::SimpleJSON { class JSONNode; }
namespace NPA::Editor::Network { class INXPResponse; }

#define <>C__DISPLAYCLASS12_0`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>C__DISPLAYCLASS12_0`1__EXECUTE_B__0_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int <>c__DisplayClass12_0`1_TypeDefinitionIndex = 26698;

	class <>c__DisplayClass12_0`1 : public Il2CppObject
	{
	public:
		::NPA::Editor::Network::NXPRequest* request; // 0x0
		::NPA::Editor::Network::NXPToyBoltRequestManager* __4__this; // 0x0
		::NPA::SimpleJSON::JSONNode* stackTraceInfo; // 0x0
		Il2CppObject* callback; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS12_0`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _Execute_b__0(::NPA::Editor::Network::INXPResponse* arg)
		{
			((::System::Void(*)(::NPA::Editor::Network::INXPResponse*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS12_0`1__EXECUTE_B__0_OFFSET))(arg, nullptr);
		}

	};

