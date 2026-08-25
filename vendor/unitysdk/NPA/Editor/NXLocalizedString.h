#pragma once
#include "../../unitysdk.h"

#define NPA_EDITOR_NXLOCALIZEDSTRING_GETTEXT_OFFSET UNITYSDK_OFFSET(0x9DA4050)
#define NPA_EDITOR_NXLOCALIZEDSTRING_GETSTRING_OFFSET UNITYSDK_OFFSET(0x9DA4550)
#define NPA_EDITOR_NXLOCALIZEDSTRING_FINDXMLDOCUMENT_OFFSET UNITYSDK_OFFSET(0x9DA4A00)
#define NPA_EDITOR_NXLOCALIZEDSTRING_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9DA4AF0)
#define NPA_EDITOR_NXLOCALIZEDSTRING_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DA4C40)
#define NPA_EDITOR_NXLOCALIZEDSTRING_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9DA4C50)

namespace NPA::Editor
{
	inline static constexpr unsigned int NXLocalizedString_TypeDefinitionIndex = 26360;

	class NXLocalizedString : public Il2CppObject
	{
	public:
		Il2CppObject* xmlDocumentsDic; // 0x0

		::System::String* getText(::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXLOCALIZEDSTRING_GETTEXT_OFFSET))(str, str, nullptr);
		}

		::System::String* GetString(::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXLOCALIZEDSTRING_GETSTRING_OFFSET))(str, str, nullptr);
		}

		::System::Xml::XmlDocument* FindXmlDocument(::System::String* str)
		{
			return (return (::System::Xml::XmlDocument*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXLOCALIZEDSTRING_FINDXMLDOCUMENT_OFFSET))(str, nullptr);
		}

		::System::Void initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXLOCALIZEDSTRING_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXLOCALIZEDSTRING_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXLOCALIZEDSTRING_.CCTOR_OFFSET))(nullptr);
		}

	};
}

