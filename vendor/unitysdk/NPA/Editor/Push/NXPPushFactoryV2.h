#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Push { class NXPPushService; }
namespace NPA::Editor::Push { class NXPPushMenu; }
namespace NPA::Editor::Push { class NXPPushSetting; }

#define NPA_EDITOR_PUSH_NXPPUSHFACTORYV2_CREATESERVICE_OFFSET UNITYSDK_OFFSET(0x9C090A0)
#define NPA_EDITOR_PUSH_NXPPUSHFACTORYV2_CREATEMENU_OFFSET UNITYSDK_OFFSET(0x9C090B0)
#define NPA_EDITOR_PUSH_NXPPUSHFACTORYV2_CREATESETTING_OFFSET UNITYSDK_OFFSET(0x9C09110)
#define NPA_EDITOR_PUSH_NXPPUSHFACTORYV2_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C07D90)

namespace NPA::Editor::Push
{
	inline static constexpr unsigned int NXPPushFactoryV2_TypeDefinitionIndex = 26560;

	class NXPPushFactoryV2 : public Il2CppObject
	{
	public:
		::NPA::Editor::Push::NXPPushService* createService()
		{
			return (return (::NPA::Editor::Push::NXPPushService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PUSH_NXPPUSHFACTORYV2_CREATESERVICE_OFFSET))(nullptr);
		}

		::NPA::Editor::Push::NXPPushMenu* createMenu()
		{
			return (return (::NPA::Editor::Push::NXPPushMenu*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PUSH_NXPPUSHFACTORYV2_CREATEMENU_OFFSET))(nullptr);
		}

		::NPA::Editor::Push::NXPPushSetting* createSetting()
		{
			return (return (::NPA::Editor::Push::NXPPushSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PUSH_NXPPUSHFACTORYV2_CREATESETTING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PUSH_NXPPUSHFACTORYV2_.CTOR_OFFSET))(nullptr);
		}

	};
}

