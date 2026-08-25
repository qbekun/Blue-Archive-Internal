#pragma once
#include "../../../unitysdk.h"

namespace NPA::Service { class NXPWebInfo; }

#define NPA_EDITOR_WEB_NXPWEBBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DAAFE0)
#define NPA_EDITOR_WEB_NXPWEBBASE_SHOWWEB_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_WEB_NXPWEBBASE_SHOWWEB_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_WEB_NXPWEBBASE_SHOWWEB_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_WEB_NXPWEBBASE_CLOSEWEB_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA::Editor::Web
{
	inline static constexpr unsigned int NXPWebBase_TypeDefinitionIndex = 26385;

	class NXPWebBase : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBASE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ShowWeb(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBASE_SHOWWEB_OFFSET))(str, str, nullptr);
		}

		::System::Void ShowWeb(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBASE_SHOWWEB_OFFSET))(str, str, str, nullptr);
		}

		::System::Void ShowWeb(::NPA::Service::NXPWebInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Service::NXPWebInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBASE_SHOWWEB_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CloseWeb()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBASE_CLOSEWEB_OFFSET))(nullptr);
		}

	};
}

