#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Web { class NXPWebBrowser; }

#define NPA_EDITOR_WEB_NXPWEBBROWSERCREATOR_CREATE_OFFSET UNITYSDK_OFFSET(0x9DAAFF0)

namespace NPA::Editor::Web
{
	inline static constexpr unsigned int NXPWebBrowserCreator_TypeDefinitionIndex = 26386;

	class NXPWebBrowserCreator : public Il2CppObject
	{
	public:
		::NPA::Editor::Web::NXPWebBrowser* Create()
		{
			return (return (::NPA::Editor::Web::NXPWebBrowser*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERCREATOR_CREATE_OFFSET))(nullptr);
		}

	};
}

