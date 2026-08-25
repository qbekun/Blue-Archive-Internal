#pragma once
#include "unitysdk.h"

namespace FlatData { class EchelonExtensionType; }

#define UIFORMATION_ECHELONEXTENSION_GET_EXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x254D0A0)
#define UIFORMATION_ECHELONEXTENSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x254D0B0)

	inline static constexpr unsigned int UIFormation_EchelonExtension_TypeDefinitionIndex = 6085;

	class UIFormation_EchelonExtension : public Il2CppObject
	{
	public:
		::FlatData::EchelonExtensionType* get_ExtensionType()
		{
			return ((::FlatData::EchelonExtensionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_ECHELONEXTENSION_GET_EXTENSIONTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_ECHELONEXTENSION_.CTOR_OFFSET))(nullptr);
		}

	};

