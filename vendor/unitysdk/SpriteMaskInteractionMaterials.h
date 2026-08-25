#pragma once
#include "unitysdk.h"

#define SPRITEMASKINTERACTIONMATERIALS_.CTOR_OFFSET UNITYSDK_OFFSET(0x960EBC0)
#define SPRITEMASKINTERACTIONMATERIALS_GET_ANYMATERIALCREATED_OFFSET UNITYSDK_OFFSET(0x960EB70)

	inline static constexpr unsigned int SpriteMaskInteractionMaterials_TypeDefinitionIndex = 35316;

	class SpriteMaskInteractionMaterials : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* materialsMaskDisabled; // 0x10
		::Il2CppArray<::System::Object*>* materialsInsideMask; // 0x18
		::Il2CppArray<::System::Object*>* materialsOutsideMask; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPRITEMASKINTERACTIONMATERIALS_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_AnyMaterialCreated()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPRITEMASKINTERACTIONMATERIALS_GET_ANYMATERIALCREATED_OFFSET))(nullptr);
		}

	};

