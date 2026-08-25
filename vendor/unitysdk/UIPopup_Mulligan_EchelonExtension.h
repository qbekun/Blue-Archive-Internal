#pragma once
#include "unitysdk.h"

namespace FlatData { class EchelonExtensionType; }

#define UIPOPUP_MULLIGAN_ECHELONEXTENSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x2562C50)
#define UIPOPUP_MULLIGAN_ECHELONEXTENSION_GET_EXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x2562C60)

	inline static constexpr unsigned int UIPopup_Mulligan_EchelonExtension_TypeDefinitionIndex = 6124;

	class UIPopup_Mulligan_EchelonExtension : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULLIGAN_ECHELONEXTENSION_.CTOR_OFFSET))(nullptr);
		}

		::FlatData::EchelonExtensionType* get_ExtensionType()
		{
			return ((::FlatData::EchelonExtensionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULLIGAN_ECHELONEXTENSION_GET_EXTENSIONTYPE_OFFSET))(nullptr);
		}

	};

