#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Font; }
namespace TMPro { class AtlasPopulationMode; }
namespace UnityEngine::TextCore { class FaceInfo; }
namespace UnityEngine { class Texture2D; }
namespace TMPro { class FaceInfo_Legacy; }
namespace UnityEngine::TextCore::LowLevel { class GlyphRenderMode; }
namespace TMPro { class KerningTable; }
namespace TMPro { class TMP_FontFeatureTable; }
namespace TMPro { class FontAssetCreationSettings; }
namespace Unity::Profiling { class ProfilerMarker; }
namespace TMPro { class TMP_FontAsset; }
namespace TMPro { class TMP_Character; }
namespace TMPro { class TMP_Character&; }

#define TMPRO_TMP_FONTASSET_GET_VERSION_OFFSET UNITYSDK_OFFSET(0xA1273A0)
#define TMPRO_TMP_FONTASSET_SET_VERSION_OFFSET UNITYSDK_OFFSET(0xA1273B0)
#define TMPRO_TMP_FONTASSET_GET_SOURCEFONTFILE_OFFSET UNITYSDK_OFFSET(0xA1273C0)
#define TMPRO_TMP_FONTASSET_SET_SOURCEFONTFILE_OFFSET UNITYSDK_OFFSET(0xA1273D0)
#define TMPRO_TMP_FONTASSET_GET_ATLASPOPULATIONMODE_OFFSET UNITYSDK_OFFSET(0xA1273E0)
#define TMPRO_TMP_FONTASSET_SET_ATLASPOPULATIONMODE_OFFSET UNITYSDK_OFFSET(0xA1273F0)
#define TMPRO_TMP_FONTASSET_GET_FACEINFO_OFFSET UNITYSDK_OFFSET(0xA127400)
#define TMPRO_TMP_FONTASSET_SET_FACEINFO_OFFSET UNITYSDK_OFFSET(0xA127440)
#define TMPRO_TMP_FONTASSET_GET_GLYPHTABLE_OFFSET UNITYSDK_OFFSET(0xA127490)
#define TMPRO_TMP_FONTASSET_SET_GLYPHTABLE_OFFSET UNITYSDK_OFFSET(0xA1274A0)
#define TMPRO_TMP_FONTASSET_GET_GLYPHLOOKUPTABLE_OFFSET UNITYSDK_OFFSET(0xA1274C0)
#define TMPRO_TMP_FONTASSET_GET_CHARACTERTABLE_OFFSET UNITYSDK_OFFSET(0xA127730)
#define TMPRO_TMP_FONTASSET_SET_CHARACTERTABLE_OFFSET UNITYSDK_OFFSET(0xA127740)
#define TMPRO_TMP_FONTASSET_GET_CHARACTERLOOKUPTABLE_OFFSET UNITYSDK_OFFSET(0xA127760)
#define TMPRO_TMP_FONTASSET_GET_ATLASTEXTURE_OFFSET UNITYSDK_OFFSET(0xA127790)
#define TMPRO_TMP_FONTASSET_GET_ATLASTEXTURES_OFFSET UNITYSDK_OFFSET(0xA127830)
#define TMPRO_TMP_FONTASSET_SET_ATLASTEXTURES_OFFSET UNITYSDK_OFFSET(0xA127840)
#define TMPRO_TMP_FONTASSET_GET_ATLASTEXTURECOUNT_OFFSET UNITYSDK_OFFSET(0xA127860)
#define TMPRO_TMP_FONTASSET_GET_ISMULTIATLASTEXTURESENABLED_OFFSET UNITYSDK_OFFSET(0xA127870)
#define TMPRO_TMP_FONTASSET_SET_ISMULTIATLASTEXTURESENABLED_OFFSET UNITYSDK_OFFSET(0xA127880)
#define TMPRO_TMP_FONTASSET_GET_CLEARDYNAMICDATAONBUILD_OFFSET UNITYSDK_OFFSET(0xA127890)
#define TMPRO_TMP_FONTASSET_SET_CLEARDYNAMICDATAONBUILD_OFFSET UNITYSDK_OFFSET(0xA1278A0)
#define TMPRO_TMP_FONTASSET_GET_USEDGLYPHRECTS_OFFSET UNITYSDK_OFFSET(0xA1278B0)
#define TMPRO_TMP_FONTASSET_SET_USEDGLYPHRECTS_OFFSET UNITYSDK_OFFSET(0xA1278C0)
#define TMPRO_TMP_FONTASSET_GET_FREEGLYPHRECTS_OFFSET UNITYSDK_OFFSET(0xA1278E0)
#define TMPRO_TMP_FONTASSET_SET_FREEGLYPHRECTS_OFFSET UNITYSDK_OFFSET(0xA1278F0)
#define TMPRO_TMP_FONTASSET_GET_FONTINFO_OFFSET UNITYSDK_OFFSET(0xA127910)
#define TMPRO_TMP_FONTASSET_GET_ATLASWIDTH_OFFSET UNITYSDK_OFFSET(0xA127920)
#define TMPRO_TMP_FONTASSET_SET_ATLASWIDTH_OFFSET UNITYSDK_OFFSET(0xA127930)
#define TMPRO_TMP_FONTASSET_GET_ATLASHEIGHT_OFFSET UNITYSDK_OFFSET(0xA127940)
#define TMPRO_TMP_FONTASSET_SET_ATLASHEIGHT_OFFSET UNITYSDK_OFFSET(0xA127950)
#define TMPRO_TMP_FONTASSET_GET_ATLASPADDING_OFFSET UNITYSDK_OFFSET(0xA127960)
#define TMPRO_TMP_FONTASSET_SET_ATLASPADDING_OFFSET UNITYSDK_OFFSET(0xA127970)
#define TMPRO_TMP_FONTASSET_GET_ATLASRENDERMODE_OFFSET UNITYSDK_OFFSET(0xA127980)
#define TMPRO_TMP_FONTASSET_SET_ATLASRENDERMODE_OFFSET UNITYSDK_OFFSET(0xA127990)
#define TMPRO_TMP_FONTASSET_GET_FONTFEATURETABLE_OFFSET UNITYSDK_OFFSET(0xA1279A0)
#define TMPRO_TMP_FONTASSET_SET_FONTFEATURETABLE_OFFSET UNITYSDK_OFFSET(0xA1279B0)
#define TMPRO_TMP_FONTASSET_GET_FALLBACKFONTASSETTABLE_OFFSET UNITYSDK_OFFSET(0xA1279D0)
#define TMPRO_TMP_FONTASSET_SET_FALLBACKFONTASSETTABLE_OFFSET UNITYSDK_OFFSET(0xA1279E0)
#define TMPRO_TMP_FONTASSET_GET_CREATIONSETTINGS_OFFSET UNITYSDK_OFFSET(0xA127A00)
#define TMPRO_TMP_FONTASSET_SET_CREATIONSETTINGS_OFFSET UNITYSDK_OFFSET(0xA127A50)
#define TMPRO_TMP_FONTASSET_GET_FONTWEIGHTTABLE_OFFSET UNITYSDK_OFFSET(0xA127AB0)
#define TMPRO_TMP_FONTASSET_SET_FONTWEIGHTTABLE_OFFSET UNITYSDK_OFFSET(0xA127AC0)
#define TMPRO_TMP_FONTASSET_CREATEFONTASSET_OFFSET UNITYSDK_OFFSET(0xA127AE0)
#define TMPRO_TMP_FONTASSET_CREATEFONTASSET_OFFSET UNITYSDK_OFFSET(0xA127B60)
#define TMPRO_TMP_FONTASSET_AWAKE_OFFSET UNITYSDK_OFFSET(0xA128180)
#define TMPRO_TMP_FONTASSET_READFONTASSETDEFINITION_OFFSET UNITYSDK_OFFSET(0xA1274F0)
#define TMPRO_TMP_FONTASSET_INITIALIZEDICTIONARYLOOKUPTABLES_OFFSET UNITYSDK_OFFSET(0xA129170)
#define TMPRO_TMP_FONTASSET_INITIALIZEGLYPHLOOKUPDICTIONARY_OFFSET UNITYSDK_OFFSET(0xA1294D0)
#define TMPRO_TMP_FONTASSET_INITIALIZECHARACTERLOOKUPDICTIONARY_OFFSET UNITYSDK_OFFSET(0xA1297D0)
#define TMPRO_TMP_FONTASSET_INITIALIZEGLYPHPAIDADJUSTMENTRECORDSLOOKUPDICTIONARY_OFFSET UNITYSDK_OFFSET(0xA129A10)
#define TMPRO_TMP_FONTASSET_ADDSYNTHESIZEDCHARACTERSANDFACEMETRICS_OFFSET UNITYSDK_OFFSET(0xA1291A0)
#define TMPRO_TMP_FONTASSET_ADDSYNTHESIZEDCHARACTER_OFFSET UNITYSDK_OFFSET(0xA129FB0)
#define TMPRO_TMP_FONTASSET_ADDCHARACTERTOLOOKUPCACHE_OFFSET UNITYSDK_OFFSET(0xA12A2D0)
#define TMPRO_TMP_FONTASSET_SORTCHARACTERTABLE_OFFSET UNITYSDK_OFFSET(0xA12A370)
#define TMPRO_TMP_FONTASSET_SORTGLYPHTABLE_OFFSET UNITYSDK_OFFSET(0xA12A4F0)
#define TMPRO_TMP_FONTASSET_SORTFONTFEATURETABLE_OFFSET UNITYSDK_OFFSET(0xA12A670)
#define TMPRO_TMP_FONTASSET_SORTALLTABLES_OFFSET UNITYSDK_OFFSET(0xA12A8F0)
#define TMPRO_TMP_FONTASSET_HASCHARACTER_OFFSET UNITYSDK_OFFSET(0xA12A930)
#define TMPRO_TMP_FONTASSET_HASCHARACTER_OFFSET UNITYSDK_OFFSET(0xA12A980)
#define TMPRO_TMP_FONTASSET_HASCHARACTER_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA12BB60)
#define TMPRO_TMP_FONTASSET_HASCHARACTERS_OFFSET UNITYSDK_OFFSET(0xA12BDB0)
#define TMPRO_TMP_FONTASSET_HASCHARACTERS_OFFSET UNITYSDK_OFFSET(0xA12BF60)
#define TMPRO_TMP_FONTASSET_HASCHARACTERS_OFFSET UNITYSDK_OFFSET(0xA12C640)
#define TMPRO_TMP_FONTASSET_GETCHARACTERS_OFFSET UNITYSDK_OFFSET(0xA12C6F0)
#define TMPRO_TMP_FONTASSET_GETCHARACTERSARRAY_OFFSET UNITYSDK_OFFSET(0xA12C800)
#define TMPRO_TMP_FONTASSET_GETGLYPHINDEX_OFFSET UNITYSDK_OFFSET(0xA12C8F0)
#define TMPRO_TMP_FONTASSET_REGISTERFONTASSETFORFONTFEATUREUPDATE_OFFSET UNITYSDK_OFFSET(0xA12CA00)
#define TMPRO_TMP_FONTASSET_UPDATEFONTFEATURESFORFONTASSETSINQUEUE_OFFSET UNITYSDK_OFFSET(0xA12CB70)
#define TMPRO_TMP_FONTASSET_REGISTERFONTASSETFORATLASTEXTUREUPDATE_OFFSET UNITYSDK_OFFSET(0xA12D070)
#define TMPRO_TMP_FONTASSET_UPDATEATLASTEXTURESFORFONTASSETSINQUEUE_OFFSET UNITYSDK_OFFSET(0xA12D1E0)
#define TMPRO_TMP_FONTASSET_TRYADDCHARACTERS_OFFSET UNITYSDK_OFFSET(0xA12D380)
#define TMPRO_TMP_FONTASSET_TRYADDCHARACTERS_OFFSET UNITYSDK_OFFSET(0xA12D3A0)
#define TMPRO_TMP_FONTASSET_TRYADDCHARACTERS_OFFSET UNITYSDK_OFFSET(0xA12E6E0)
#define TMPRO_TMP_FONTASSET_TRYADDCHARACTERS_OFFSET UNITYSDK_OFFSET(0xA12E700)
#define TMPRO_TMP_FONTASSET_TRYADDCHARACTERINTERNAL_OFFSET UNITYSDK_OFFSET(0xA12AF30)
#define TMPRO_TMP_FONTASSET_TRYGETCHARACTER_AND_QUEUERENDERTOTEXTURE_OFFSET UNITYSDK_OFFSET(0xA12F770)
#define TMPRO_TMP_FONTASSET_TRYADDGLYPHSTOATLASTEXTURES_OFFSET UNITYSDK_OFFSET(0xA12D370)
#define TMPRO_TMP_FONTASSET_TRYADDGLYPHSTONEWATLASTEXTURE_OFFSET UNITYSDK_OFFSET(0xA12E1C0)
#define TMPRO_TMP_FONTASSET_SETUPNEWATLASTEXTURE_OFFSET UNITYSDK_OFFSET(0xA12F4F0)
#define TMPRO_TMP_FONTASSET_UPDATEATLASTEXTURE_OFFSET UNITYSDK_OFFSET(0xA12FE30)
#define TMPRO_TMP_FONTASSET_UPDATEGLYPHADJUSTMENTRECORDS_OFFSET UNITYSDK_OFFSET(0xA12CD00)
#define TMPRO_TMP_FONTASSET_UPDATEGLYPHADJUSTMENTRECORDS_OFFSET UNITYSDK_OFFSET(0xA130250)
#define TMPRO_TMP_FONTASSET_UPDATEGLYPHADJUSTMENTRECORDS_OFFSET UNITYSDK_OFFSET(0xA130590)
#define TMPRO_TMP_FONTASSET_UPDATEGLYPHADJUSTMENTRECORDS_OFFSET UNITYSDK_OFFSET(0xA1305A0)
#define TMPRO_TMP_FONTASSET_COPYLISTDATATOARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define TMPRO_TMP_FONTASSET_CLEARFONTASSETDATA_OFFSET UNITYSDK_OFFSET(0xA1305B0)
#define TMPRO_TMP_FONTASSET_CLEARFONTASSETDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0xA130C60)
#define TMPRO_TMP_FONTASSET_UPDATEFONTASSETDATA_OFFSET UNITYSDK_OFFSET(0xA130C80)
#define TMPRO_TMP_FONTASSET_CLEARFONTASSETTABLES_OFFSET UNITYSDK_OFFSET(0xA1305E0)
#define TMPRO_TMP_FONTASSET_CLEARATLASTEXTURES_OFFSET UNITYSDK_OFFSET(0xA130830)
#define TMPRO_TMP_FONTASSET_UPGRADEFONTASSET_OFFSET UNITYSDK_OFFSET(0xA128200)
#define TMPRO_TMP_FONTASSET_UPGRADEGLYPHADJUSTMENTTABLETOFONTFEATURETABLE_OFFSET UNITYSDK_OFFSET(0xA129BE0)
#define TMPRO_TMP_FONTASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xA130E10)
#define TMPRO_TMP_FONTASSET_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA131320)

namespace TMPro
{
	inline static constexpr unsigned int TMP_FontAsset_TypeDefinitionIndex = 33658;

	class TMP_FontAsset : public Il2CppObject
	{
	public:
		::System::String* m_Version; // 0x30
		::System::String* m_SourceFontFileGUID; // 0x38
		::UnityEngine::Font* m_SourceFontFile; // 0x40
		::TMPro::AtlasPopulationMode* m_AtlasPopulationMode; // 0x48
		::UnityEngine::TextCore::FaceInfo* m_FaceInfo; // 0x50
		Il2CppObject* m_GlyphTable; // 0xB0
		Il2CppObject* m_GlyphLookupDictionary; // 0xB8
		Il2CppObject* m_CharacterTable; // 0xC0
		Il2CppObject* m_CharacterLookupDictionary; // 0xC8
		::UnityEngine::Texture2D* m_AtlasTexture; // 0xD0
		::Il2CppArray<::System::Object*>* m_AtlasTextures; // 0xD8
		::System::Int32 m_AtlasTextureIndex; // 0xE0
		::System::Boolean m_IsMultiAtlasTexturesEnabled; // 0xE4
		::System::Boolean m_ClearDynamicDataOnBuild; // 0xE5
		Il2CppObject* m_UsedGlyphRects; // 0xE8
		Il2CppObject* m_FreeGlyphRects; // 0xF0
		::TMPro::FaceInfo_Legacy* m_fontInfo; // 0xF8
		::UnityEngine::Texture2D* atlas; // 0x100
		::System::Int32 m_AtlasWidth; // 0x108
		::System::Int32 m_AtlasHeight; // 0x10C
		::System::Int32 m_AtlasPadding; // 0x110
		::UnityEngine::TextCore::LowLevel::GlyphRenderMode* m_AtlasRenderMode; // 0x114
		Il2CppObject* m_glyphInfoList; // 0x118
		::TMPro::KerningTable* m_KerningTable; // 0x120
		::TMPro::TMP_FontFeatureTable* m_FontFeatureTable; // 0x128
		Il2CppObject* fallbackFontAssets; // 0x130
		Il2CppObject* m_FallbackFontAssetTable; // 0x138
		::TMPro::FontAssetCreationSettings* m_CreationSettings; // 0x140
		::Il2CppArray<::System::Object*>* m_FontWeightTable; // 0x198
		::Il2CppArray<::System::Object*>* fontWeights; // 0x1A0
		::System::Single normalStyle; // 0x1A8
		::System::Single normalSpacingOffset; // 0x1AC
		::System::Single boldStyle; // 0x1B0
		::System::Single boldSpacing; // 0x1B4
		::System::Byte italicStyle; // 0x1B8
		::System::Byte tabSize; // 0x1B9
		::System::Boolean IsFontAssetLookupTablesDirty; // 0x1BA
		::Unity::Profiling::ProfilerMarker* k_ReadFontAssetDefinitionMarker; // 0x0
		::Unity::Profiling::ProfilerMarker* k_AddSynthesizedCharactersMarker; // 0x8
		::Unity::Profiling::ProfilerMarker* k_TryAddCharacterMarker; // 0x10
		::Unity::Profiling::ProfilerMarker* k_TryAddCharactersMarker; // 0x18
		::Unity::Profiling::ProfilerMarker* k_UpdateGlyphAdjustmentRecordsMarker; // 0x20
		::Unity::Profiling::ProfilerMarker* k_ClearFontAssetDataMarker; // 0x28
		::Unity::Profiling::ProfilerMarker* k_UpdateFontAssetDataMarker; // 0x30
		::System::String* s_DefaultMaterialSuffix; // 0x38
		Il2CppObject* FallbackSearchQueryLookup; // 0x1C0
		Il2CppObject* k_SearchedFontAssetLookup; // 0x40
		Il2CppObject* k_FontAssets_FontFeaturesUpdateQueue; // 0x48
		Il2CppObject* k_FontAssets_FontFeaturesUpdateQueueLookup; // 0x50
		Il2CppObject* k_FontAssets_AtlasTexturesUpdateQueue; // 0x58
		Il2CppObject* k_FontAssets_AtlasTexturesUpdateQueueLookup; // 0x60
		Il2CppObject* m_GlyphsToRender; // 0x1C8
		Il2CppObject* m_GlyphsRendered; // 0x1D0
		Il2CppObject* m_GlyphIndexList; // 0x1D8
		Il2CppObject* m_GlyphIndexListNewlyAdded; // 0x1E0
		Il2CppObject* m_GlyphsToAdd; // 0x1E8
		Il2CppObject* m_GlyphsToAddLookup; // 0x1F0
		Il2CppObject* m_CharactersToAdd; // 0x1F8
		Il2CppObject* m_CharactersToAddLookup; // 0x200
		Il2CppObject* s_MissingCharacterList; // 0x208
		Il2CppObject* m_MissingUnicodesFromFontFile; // 0x210
		::Il2CppArray<::System::Object*>* k_GlyphIndexArray; // 0x68

		::System::String* get_version()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_VERSION_OFFSET))(nullptr);
		}

		::System::Void set_version(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_VERSION_OFFSET))(str, nullptr);
		}

		::UnityEngine::Font* get_sourceFontFile()
		{
			return (return (::UnityEngine::Font*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_SOURCEFONTFILE_OFFSET))(nullptr);
		}

		::System::Void set_sourceFontFile(::UnityEngine::Font* arg)
		{
			((::System::Void(*)(::UnityEngine::Font*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_SOURCEFONTFILE_OFFSET))(arg, nullptr);
		}

		::TMPro::AtlasPopulationMode* get_atlasPopulationMode()
		{
			return (return (::TMPro::AtlasPopulationMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_ATLASPOPULATIONMODE_OFFSET))(nullptr);
		}

		::System::Void set_atlasPopulationMode(::TMPro::AtlasPopulationMode* arg)
		{
			((::System::Void(*)(::TMPro::AtlasPopulationMode*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_ATLASPOPULATIONMODE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::TextCore::FaceInfo* get_faceInfo()
		{
			return (return (::UnityEngine::TextCore::FaceInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_FACEINFO_OFFSET))(nullptr);
		}

		::System::Void set_faceInfo(::UnityEngine::TextCore::FaceInfo* arg)
		{
			((::System::Void(*)(::UnityEngine::TextCore::FaceInfo*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_FACEINFO_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_glyphTable()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_GLYPHTABLE_OFFSET))(nullptr);
		}

		::System::Void set_glyphTable(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_GLYPHTABLE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_glyphLookupTable()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_GLYPHLOOKUPTABLE_OFFSET))(nullptr);
		}

		Il2CppObject* get_characterTable()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_CHARACTERTABLE_OFFSET))(nullptr);
		}

		::System::Void set_characterTable(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_CHARACTERTABLE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_characterLookupTable()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_CHARACTERLOOKUPTABLE_OFFSET))(nullptr);
		}

		::UnityEngine::Texture2D* get_atlasTexture()
		{
			return (return (::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_ATLASTEXTURE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_atlasTextures()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_ATLASTEXTURES_OFFSET))(nullptr);
		}

		::System::Void set_atlasTextures(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_ATLASTEXTURES_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_atlasTextureCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_ATLASTEXTURECOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_isMultiAtlasTexturesEnabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_ISMULTIATLASTEXTURESENABLED_OFFSET))(nullptr);
		}

		::System::Void set_isMultiAtlasTexturesEnabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_ISMULTIATLASTEXTURESENABLED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_clearDynamicDataOnBuild()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_CLEARDYNAMICDATAONBUILD_OFFSET))(nullptr);
		}

		::System::Void set_clearDynamicDataOnBuild(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_CLEARDYNAMICDATAONBUILD_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_usedGlyphRects()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_USEDGLYPHRECTS_OFFSET))(nullptr);
		}

		::System::Void set_usedGlyphRects(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_USEDGLYPHRECTS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_freeGlyphRects()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_FREEGLYPHRECTS_OFFSET))(nullptr);
		}

		::System::Void set_freeGlyphRects(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_FREEGLYPHRECTS_OFFSET))(arg, nullptr);
		}

		::TMPro::FaceInfo_Legacy* get_fontInfo()
		{
			return (return (::TMPro::FaceInfo_Legacy*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_FONTINFO_OFFSET))(nullptr);
		}

		::System::Int32 get_atlasWidth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_ATLASWIDTH_OFFSET))(nullptr);
		}

		::System::Void set_atlasWidth(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_ATLASWIDTH_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_atlasHeight()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_ATLASHEIGHT_OFFSET))(nullptr);
		}

		::System::Void set_atlasHeight(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_ATLASHEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_atlasPadding()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_ATLASPADDING_OFFSET))(nullptr);
		}

		::System::Void set_atlasPadding(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_ATLASPADDING_OFFSET))(arg, nullptr);
		}

		::UnityEngine::TextCore::LowLevel::GlyphRenderMode* get_atlasRenderMode()
		{
			return (return (::UnityEngine::TextCore::LowLevel::GlyphRenderMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_ATLASRENDERMODE_OFFSET))(nullptr);
		}

		::System::Void set_atlasRenderMode(::UnityEngine::TextCore::LowLevel::GlyphRenderMode* arg)
		{
			((::System::Void(*)(::UnityEngine::TextCore::LowLevel::GlyphRenderMode*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_ATLASRENDERMODE_OFFSET))(arg, nullptr);
		}

		::TMPro::TMP_FontFeatureTable* get_fontFeatureTable()
		{
			return (return (::TMPro::TMP_FontFeatureTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_FONTFEATURETABLE_OFFSET))(nullptr);
		}

		::System::Void set_fontFeatureTable(::TMPro::TMP_FontFeatureTable* arg)
		{
			((::System::Void(*)(::TMPro::TMP_FontFeatureTable*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_FONTFEATURETABLE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_fallbackFontAssetTable()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_FALLBACKFONTASSETTABLE_OFFSET))(nullptr);
		}

		::System::Void set_fallbackFontAssetTable(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_FALLBACKFONTASSETTABLE_OFFSET))(arg, nullptr);
		}

		::TMPro::FontAssetCreationSettings* get_creationSettings()
		{
			return (return (::TMPro::FontAssetCreationSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_CREATIONSETTINGS_OFFSET))(nullptr);
		}

		::System::Void set_creationSettings(::TMPro::FontAssetCreationSettings* arg)
		{
			((::System::Void(*)(::TMPro::FontAssetCreationSettings*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_CREATIONSETTINGS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_fontWeightTable()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_FONTWEIGHTTABLE_OFFSET))(nullptr);
		}

		::System::Void set_fontWeightTable(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_FONTWEIGHTTABLE_OFFSET))(arg, nullptr);
		}

		::TMPro::TMP_FontAsset* CreateFontAsset(::UnityEngine::Font* arg)
		{
			return (return (::TMPro::TMP_FontAsset*(*)(::UnityEngine::Font*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_CREATEFONTASSET_OFFSET))(arg, nullptr);
		}

		::TMPro::TMP_FontAsset* CreateFontAsset(::UnityEngine::Font* arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode* arg, ::System::Int32 arg, ::System::Int32 arg, ::TMPro::AtlasPopulationMode* arg, ::System::Boolean arg)
		{
			return (return (::TMPro::TMP_FontAsset*(*)(::UnityEngine::Font*, ::System::Int32, ::System::Int32, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode*, ::System::Int32, ::System::Int32, ::TMPro::AtlasPopulationMode*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_CREATEFONTASSET_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_AWAKE_OFFSET))(nullptr);
		}

		::System::Void ReadFontAssetDefinition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_READFONTASSETDEFINITION_OFFSET))(nullptr);
		}

		::System::Void InitializeDictionaryLookupTables()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_INITIALIZEDICTIONARYLOOKUPTABLES_OFFSET))(nullptr);
		}

		::System::Void InitializeGlyphLookupDictionary()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_INITIALIZEGLYPHLOOKUPDICTIONARY_OFFSET))(nullptr);
		}

		::System::Void InitializeCharacterLookupDictionary()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_INITIALIZECHARACTERLOOKUPDICTIONARY_OFFSET))(nullptr);
		}

		::System::Void InitializeGlyphPaidAdjustmentRecordsLookupDictionary()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_INITIALIZEGLYPHPAIDADJUSTMENTRECORDSLOOKUPDICTIONARY_OFFSET))(nullptr);
		}

		::System::Void AddSynthesizedCharactersAndFaceMetrics()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_ADDSYNTHESIZEDCHARACTERSANDFACEMETRICS_OFFSET))(nullptr);
		}

		::System::Void AddSynthesizedCharacter(::System::UInt32 arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::UInt32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_ADDSYNTHESIZEDCHARACTER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddCharacterToLookupCache(::System::UInt32 arg, ::TMPro::TMP_Character* arg)
		{
			((::System::Void(*)(::System::UInt32, ::TMPro::TMP_Character*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_ADDCHARACTERTOLOOKUPCACHE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SortCharacterTable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SORTCHARACTERTABLE_OFFSET))(nullptr);
		}

		::System::Void SortGlyphTable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SORTGLYPHTABLE_OFFSET))(nullptr);
		}

		::System::Void SortFontFeatureTable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SORTFONTFEATURETABLE_OFFSET))(nullptr);
		}

		::System::Void SortAllTables()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SORTALLTABLES_OFFSET))(nullptr);
		}

		::System::Boolean HasCharacter(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_HASCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasCharacter(::System::Char arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_HASCHARACTER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean HasCharacter_Internal(::System::UInt32 arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_HASCHARACTER_INTERNAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean HasCharacters(::System::String* str, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_HASCHARACTERS_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean HasCharacters(::System::String* str, ::System::Object[]&* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Object[]&*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_HASCHARACTERS_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Boolean HasCharacters(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_HASCHARACTERS_OFFSET))(str, nullptr);
		}

		::System::String* GetCharacters(::TMPro::TMP_FontAsset* arg)
		{
			return (return (::System::String*(*)(::TMPro::TMP_FontAsset*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GETCHARACTERS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCharactersArray(::TMPro::TMP_FontAsset* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::TMPro::TMP_FontAsset*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GETCHARACTERSARRAY_OFFSET))(arg, nullptr);
		}

		::System::UInt32 GetGlyphIndex(::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GETGLYPHINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterFontAssetForFontFeatureUpdate(::TMPro::TMP_FontAsset* arg)
		{
			((::System::Void(*)(::TMPro::TMP_FontAsset*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_REGISTERFONTASSETFORFONTFEATUREUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateFontFeaturesForFontAssetsInQueue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_UPDATEFONTFEATURESFORFONTASSETSINQUEUE_OFFSET))(nullptr);
		}

		::System::Void RegisterFontAssetForAtlasTextureUpdate(::TMPro::TMP_FontAsset* arg)
		{
			((::System::Void(*)(::TMPro::TMP_FontAsset*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_REGISTERFONTASSETFORATLASTEXTUREUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateAtlasTexturesForFontAssetsInQueue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_UPDATEATLASTEXTURESFORFONTASSETSINQUEUE_OFFSET))(nullptr);
		}

		::System::Boolean TryAddCharacters(::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_TRYADDCHARACTERS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryAddCharacters(::Il2CppArray<::System::Object*>* arg, ::System::Object[]&* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Object[]&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_TRYADDCHARACTERS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryAddCharacters(::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_TRYADDCHARACTERS_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean TryAddCharacters(::System::String* str, ::System::String&* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_TRYADDCHARACTERS_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean TryAddCharacterInternal(::System::UInt32 arg, ::TMPro::TMP_Character&* arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::TMPro::TMP_Character&*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_TRYADDCHARACTERINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetCharacter_and_QueueRenderToTexture(::System::UInt32 arg, ::TMPro::TMP_Character&* arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::TMPro::TMP_Character&*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_TRYGETCHARACTER_AND_QUEUERENDERTOTEXTURE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void TryAddGlyphsToAtlasTextures()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_TRYADDGLYPHSTOATLASTEXTURES_OFFSET))(nullptr);
		}

		::System::Boolean TryAddGlyphsToNewAtlasTexture()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_TRYADDGLYPHSTONEWATLASTEXTURE_OFFSET))(nullptr);
		}

		::System::Void SetupNewAtlasTexture()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SETUPNEWATLASTEXTURE_OFFSET))(nullptr);
		}

		::System::Void UpdateAtlasTexture()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_UPDATEATLASTEXTURE_OFFSET))(nullptr);
		}

		::System::Void UpdateGlyphAdjustmentRecords()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_UPDATEGLYPHADJUSTMENTRECORDS_OFFSET))(nullptr);
		}

		::System::Void UpdateGlyphAdjustmentRecords(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_UPDATEGLYPHADJUSTMENTRECORDS_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateGlyphAdjustmentRecords(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_UPDATEGLYPHADJUSTMENTRECORDS_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateGlyphAdjustmentRecords(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_UPDATEGLYPHADJUSTMENTRECORDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CopyListDataToArray(Il2CppObject* arg, ::System::Object[]&* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_COPYLISTDATATOARRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ClearFontAssetData(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_CLEARFONTASSETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void ClearFontAssetDataInternal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_CLEARFONTASSETDATAINTERNAL_OFFSET))(nullptr);
		}

		::System::Void UpdateFontAssetData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_UPDATEFONTASSETDATA_OFFSET))(nullptr);
		}

		::System::Void ClearFontAssetTables()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_CLEARFONTASSETTABLES_OFFSET))(nullptr);
		}

		::System::Void ClearAtlasTextures(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_CLEARATLASTEXTURES_OFFSET))(arg, nullptr);
		}

		::System::Void UpgradeFontAsset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_UPGRADEFONTASSET_OFFSET))(nullptr);
		}

		::System::Void UpgradeGlyphAdjustmentTableToFontFeatureTable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_UPGRADEGLYPHADJUSTMENTTABLETOFONTFEATURETABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_.CCTOR_OFFSET))(nullptr);
		}

	};
}

