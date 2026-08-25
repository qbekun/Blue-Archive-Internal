#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Push { class NXPPushService; }
namespace NPA::Editor::Push { class NXPPushMenu; }
namespace NPA::Editor::Push { class NXPPushSetting; }

#define NPA_EDITOR_PUSH_NXPPUSHFACTORY_CREATESERVICE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_PUSH_NXPPUSHFACTORY_CREATEMENU_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_PUSH_NXPPUSHFACTORY_CREATESETTING_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA::Editor::Push
{
	inline static constexpr unsigned int NXPPushFactory_TypeDefinitionIndex = 26550;

	class NXPPushFactory : public Il2CppObject
	{
	public:
		::NPA::Editor::Push::NXPPushService* createService()
		{
			return (return (::NPA::Editor::Push::NXPPushService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PUSH_NXPPUSHFACTORY_CREATESERVICE_OFFSET))(nullptr);
		}

		::NPA::Editor::Push::NXPPushMenu* createMenu()
		{
			return (return (::NPA::Editor::Push::NXPPushMenu*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PUSH_NXPPUSHFACTORY_CREATEMENU_OFFSET))(nullptr);
		}

		::NPA::Editor::Push::NXPPushSetting* createSetting()
		{
			return (return (::NPA::Editor::Push::NXPPushSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PUSH_NXPPUSHFACTORY_CREATESETTING_OFFSET))(nullptr);
		}

	};
}

