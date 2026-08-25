#pragma once
#include "../../../unitysdk.h"

namespace NPA::Service { class NXPWebInfo; }

#define NPA_EDITOR_WEB_NXPWEBEDITOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DACA90)
#define NPA_EDITOR_WEB_NXPWEBEDITOR_SHOWWEB_OFFSET UNITYSDK_OFFSET(0x9DACAB0)
#define NPA_EDITOR_WEB_NXPWEBEDITOR_SHOWWEB_OFFSET UNITYSDK_OFFSET(0x9DACAC0)
#define NPA_EDITOR_WEB_NXPWEBEDITOR_SHOWWEB_OFFSET UNITYSDK_OFFSET(0x9DACAD0)
#define NPA_EDITOR_WEB_NXPWEBEDITOR_CLOSEWEB_OFFSET UNITYSDK_OFFSET(0x9DACAE0)

namespace NPA::Editor::Web
{
	inline static constexpr unsigned int NXPWebEditor_TypeDefinitionIndex = 26389;

	class NXPWebEditor : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBEDITOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ShowWeb(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBEDITOR_SHOWWEB_OFFSET))(str, str, nullptr);
		}

		::System::Void ShowWeb(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBEDITOR_SHOWWEB_OFFSET))(str, str, str, nullptr);
		}

		::System::Void ShowWeb(::NPA::Service::NXPWebInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Service::NXPWebInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBEDITOR_SHOWWEB_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CloseWeb()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBEDITOR_CLOSEWEB_OFFSET))(nullptr);
		}

	};
}

