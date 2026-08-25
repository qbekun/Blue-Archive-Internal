#pragma once
#include "../../unitysdk.h"

namespace MX::AssetBundles { class PatchOption; }

#define MX_ASSETBUNDLES_PATCHLOGICHOLDER_COMBINEFILENAME_OFFSET UNITYSDK_OFFSET(0x1444260)
#define MX_ASSETBUNDLES_PATCHLOGICHOLDER_GETPATCHOPTION_OFFSET UNITYSDK_OFFSET(0x1445130)
#define MX_ASSETBUNDLES_PATCHLOGICHOLDER_CREATEEDITOROPTION_OFFSET UNITYSDK_OFFSET(0x1445180)

namespace MX::AssetBundles
{
	inline static constexpr unsigned int PatchLogicHolder_TypeDefinitionIndex = 14948;

	class PatchLogicHolder : public Il2CppObject
	{
	public:
		::MX::AssetBundles::PatchOption* patchOption; // 0x0

		::System::String* CombineFileName(::System::String* str, ::System::String* str2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_PATCHLOGICHOLDER_COMBINEFILENAME_OFFSET))(str, str2, nullptr);
		}

		::MX::AssetBundles::PatchOption* GetPatchOption()
		{
			return ((::MX::AssetBundles::PatchOption*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_PATCHLOGICHOLDER_GETPATCHOPTION_OFFSET))(nullptr);
		}

		::System::Void CreateEditorOption()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_PATCHLOGICHOLDER_CREATEEDITOROPTION_OFFSET))(nullptr);
		}

	};
}

