#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Font; }
namespace UnityEngine::TextCore::Text { class AtlasPopulationMode; }
namespace UnityEngine::TextCore { class FaceInfo; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::TextCore::LowLevel { class GlyphRenderMode; }
namespace UnityEngine::TextCore::Text { class FontFeatureTable; }
namespace UnityEngine::TextCore::Text { class FontAssetCreationEditorSettings; }
namespace Unity::Profiling { class ProfilerMarker; }
namespace UnityEngine::TextCore::Text { class FontAsset; }
namespace UnityEngine::TextCore::Text { class Character; }
namespace UnityEngine::TextCore::LowLevel { class FontEngineError; }
namespace UnityEngine::TextCore::Text { class Character&; }

#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_SOURCEFONTFILE_OFFSET UNITYSDK_OFFSET(0xA2CAFD0)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SET_SOURCEFONTFILE_OFFSET UNITYSDK_OFFSET(0xA2CAFE0)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_ATLASPOPULATIONMODE_OFFSET UNITYSDK_OFFSET(0xA2CAFF0)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SET_ATLASPOPULATIONMODE_OFFSET UNITYSDK_OFFSET(0xA2CB000)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_FACEINFO_OFFSET UNITYSDK_OFFSET(0xA2CB010)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SET_FACEINFO_OFFSET UNITYSDK_OFFSET(0xA2CB050)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_FAMILYNAMEHASHCODE_OFFSET UNITYSDK_OFFSET(0xA2CB0A0)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SET_FAMILYNAMEHASHCODE_OFFSET UNITYSDK_OFFSET(0xA2CB0E0)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_STYLENAMEHASHCODE_OFFSET UNITYSDK_OFFSET(0xA2CB0F0)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SET_STYLENAMEHASHCODE_OFFSET UNITYSDK_OFFSET(0xA2CB130)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_FONTWEIGHTTABLE_OFFSET UNITYSDK_OFFSET(0xA2CB140)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SET_FONTWEIGHTTABLE_OFFSET UNITYSDK_OFFSET(0xA2CB150)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_GLYPHTABLE_OFFSET UNITYSDK_OFFSET(0xA2CB170)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SET_GLYPHTABLE_OFFSET UNITYSDK_OFFSET(0xA2CB180)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_GLYPHLOOKUPTABLE_OFFSET UNITYSDK_OFFSET(0xA2CB1A0)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_CHARACTERTABLE_OFFSET UNITYSDK_OFFSET(0xA2CB5E0)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SET_CHARACTERTABLE_OFFSET UNITYSDK_OFFSET(0xA2CB5F0)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_CHARACTERLOOKUPTABLE_OFFSET UNITYSDK_OFFSET(0xA2CB610)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_ATLASTEXTURE_OFFSET UNITYSDK_OFFSET(0xA2CB640)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_ATLASTEXTURES_OFFSET UNITYSDK_OFFSET(0xA2CB6E0)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SET_ATLASTEXTURES_OFFSET UNITYSDK_OFFSET(0xA2CB6F0)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_ATLASTEXTURECOUNT_OFFSET UNITYSDK_OFFSET(0xA2CB710)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_ISMULTIATLASTEXTURESENABLED_OFFSET UNITYSDK_OFFSET(0xA2CB720)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SET_ISMULTIATLASTEXTURESENABLED_OFFSET UNITYSDK_OFFSET(0xA2CB730)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_CLEARDYNAMICDATAONBUILD_OFFSET UNITYSDK_OFFSET(0xA2CB740)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SET_CLEARDYNAMICDATAONBUILD_OFFSET UNITYSDK_OFFSET(0xA2CB750)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_ATLASWIDTH_OFFSET UNITYSDK_OFFSET(0xA2CB760)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SET_ATLASWIDTH_OFFSET UNITYSDK_OFFSET(0xA2CB770)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_ATLASHEIGHT_OFFSET UNITYSDK_OFFSET(0xA2CB780)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SET_ATLASHEIGHT_OFFSET UNITYSDK_OFFSET(0xA2CB790)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_ATLASPADDING_OFFSET UNITYSDK_OFFSET(0xA2CB7A0)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SET_ATLASPADDING_OFFSET UNITYSDK_OFFSET(0xA2CB7B0)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_ATLASRENDERMODE_OFFSET UNITYSDK_OFFSET(0xA2CB7C0)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SET_ATLASRENDERMODE_OFFSET UNITYSDK_OFFSET(0xA2CB7D0)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_USEDGLYPHRECTS_OFFSET UNITYSDK_OFFSET(0xA2CB7E0)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SET_USEDGLYPHRECTS_OFFSET UNITYSDK_OFFSET(0xA2CB7F0)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_FREEGLYPHRECTS_OFFSET UNITYSDK_OFFSET(0xA2CB810)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SET_FREEGLYPHRECTS_OFFSET UNITYSDK_OFFSET(0xA2CB820)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_FONTFEATURETABLE_OFFSET UNITYSDK_OFFSET(0xA2CB840)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SET_FONTFEATURETABLE_OFFSET UNITYSDK_OFFSET(0xA2CB850)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_FALLBACKFONTASSETTABLE_OFFSET UNITYSDK_OFFSET(0xA2CB870)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SET_FALLBACKFONTASSETTABLE_OFFSET UNITYSDK_OFFSET(0xA2CB880)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_FONTASSETCREATIONEDITORSETTINGS_OFFSET UNITYSDK_OFFSET(0xA2CB8A0)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SET_FONTASSETCREATIONEDITORSETTINGS_OFFSET UNITYSDK_OFFSET(0xA2CB8E0)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_REGULARSTYLEWEIGHT_OFFSET UNITYSDK_OFFSET(0xA2CB930)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SET_REGULARSTYLEWEIGHT_OFFSET UNITYSDK_OFFSET(0xA2CB940)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_REGULARSTYLESPACING_OFFSET UNITYSDK_OFFSET(0xA2CB950)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SET_REGULARSTYLESPACING_OFFSET UNITYSDK_OFFSET(0xA2CB960)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_BOLDSTYLEWEIGHT_OFFSET UNITYSDK_OFFSET(0xA2CB970)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SET_BOLDSTYLEWEIGHT_OFFSET UNITYSDK_OFFSET(0xA2CB980)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_BOLDSTYLESPACING_OFFSET UNITYSDK_OFFSET(0xA2CB990)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SET_BOLDSTYLESPACING_OFFSET UNITYSDK_OFFSET(0xA2CB9A0)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_ITALICSTYLESLANT_OFFSET UNITYSDK_OFFSET(0xA2CB9B0)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SET_ITALICSTYLESLANT_OFFSET UNITYSDK_OFFSET(0xA2CB9C0)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_TABMULTIPLE_OFFSET UNITYSDK_OFFSET(0xA2CB9D0)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SET_TABMULTIPLE_OFFSET UNITYSDK_OFFSET(0xA2CB9E0)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_CREATEFONTASSET_OFFSET UNITYSDK_OFFSET(0xA2CB9F0)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_CREATEFONTASSET_OFFSET UNITYSDK_OFFSET(0xA2CBCC0)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_CREATEFONTASSET_OFFSET UNITYSDK_OFFSET(0xA2CC370)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_CREATEFONTASSET_OFFSET UNITYSDK_OFFSET(0xA2CC470)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_CREATEFONTASSET_OFFSET UNITYSDK_OFFSET(0xA2CC520)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_CREATEFONTASSETINSTANCE_OFFSET UNITYSDK_OFFSET(0xA2CBE00)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_AWAKE_OFFSET UNITYSDK_OFFSET(0xA2CC700)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA2CC710)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_READFONTASSETDEFINITION_OFFSET UNITYSDK_OFFSET(0xA2CB1D0)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_INITIALIZEDICTIONARYLOOKUPTABLES_OFFSET UNITYSDK_OFFSET(0xA2CC840)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_INITIALIZEGLYPHLOOKUPDICTIONARY_OFFSET UNITYSDK_OFFSET(0xA2CCA20)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_INITIALIZECHARACTERLOOKUPDICTIONARY_OFFSET UNITYSDK_OFFSET(0xA2CCD10)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_INITIALIZEGLYPHPAIDADJUSTMENTRECORDSLOOKUPDICTIONARY_OFFSET UNITYSDK_OFFSET(0xA2CCED0)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_ADDSYNTHESIZEDCHARACTERSANDFACEMETRICS_OFFSET UNITYSDK_OFFSET(0xA2CC870)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_ADDSYNTHESIZEDCHARACTER_OFFSET UNITYSDK_OFFSET(0xA2CD250)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_ADDCHARACTERTOLOOKUPCACHE_OFFSET UNITYSDK_OFFSET(0xA2CD580)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_LOADFONTFACE_OFFSET UNITYSDK_OFFSET(0xA2CD180)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SORTCHARACTERTABLE_OFFSET UNITYSDK_OFFSET(0xA2CD5E0)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SORTGLYPHTABLE_OFFSET UNITYSDK_OFFSET(0xA2CD770)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SORTFONTFEATURETABLE_OFFSET UNITYSDK_OFFSET(0xA2CD900)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SORTALLTABLES_OFFSET UNITYSDK_OFFSET(0xA2CDB90)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_HASCHARACTER_OFFSET UNITYSDK_OFFSET(0xA2CDBD0)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_HASCHARACTER_OFFSET UNITYSDK_OFFSET(0xA2CDC20)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_HASCHARACTER_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA2CEC60)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_HASCHARACTERS_OFFSET UNITYSDK_OFFSET(0xA2CEE60)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_HASCHARACTERS_OFFSET UNITYSDK_OFFSET(0xA2CF010)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_HASCHARACTERS_OFFSET UNITYSDK_OFFSET(0xA2CF500)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GETCHARACTERS_OFFSET UNITYSDK_OFFSET(0xA2CF5B0)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GETCHARACTERSARRAY_OFFSET UNITYSDK_OFFSET(0xA2CF6C0)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GETGLYPHINDEX_OFFSET UNITYSDK_OFFSET(0xA2CF7B0)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_REGISTERFONTASSETFORFONTFEATUREUPDATE_OFFSET UNITYSDK_OFFSET(0xA2CF880)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_UPDATEFONTFEATURESFORFONTASSETSINQUEUE_OFFSET UNITYSDK_OFFSET(0xA2CFA20)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_REGISTERATLASTEXTUREFORAPPLY_OFFSET UNITYSDK_OFFSET(0xA2CFFA0)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_UPDATEATLASTEXTURESINQUEUE_OFFSET UNITYSDK_OFFSET(0xA2D00E0)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_UPDATEFONTASSETINUPDATEQUEUE_OFFSET UNITYSDK_OFFSET(0xA2D0290)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_TRYADDCHARACTERS_OFFSET UNITYSDK_OFFSET(0xA2D0300)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_TRYADDCHARACTERS_OFFSET UNITYSDK_OFFSET(0xA2D0320)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_TRYADDCHARACTERS_OFFSET UNITYSDK_OFFSET(0xA2D1660)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_TRYADDCHARACTERS_OFFSET UNITYSDK_OFFSET(0xA2D1680)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_TRYADDCHARACTERINTERNAL_OFFSET UNITYSDK_OFFSET(0xA2CDFA0)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_TRYGETCHARACTER_AND_QUEUERENDERTOTEXTURE_OFFSET UNITYSDK_OFFSET(0xA2D2700)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_TRYADDGLYPHSTOATLASTEXTURES_OFFSET UNITYSDK_OFFSET(0xA2D2D60)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_TRYADDGLYPHSTONEWATLASTEXTURE_OFFSET UNITYSDK_OFFSET(0xA2D1140)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SETUPNEWATLASTEXTURE_OFFSET UNITYSDK_OFFSET(0xA2D2480)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_UPDATEATLASTEXTURE_OFFSET UNITYSDK_OFFSET(0xA2D2D70)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_UPDATEGLYPHADJUSTMENTRECORDS_OFFSET UNITYSDK_OFFSET(0xA2CFBC0)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_UPDATEGLYPHADJUSTMENTRECORDS_OFFSET UNITYSDK_OFFSET(0xA2D3000)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_UPDATEGLYPHADJUSTMENTRECORDS_OFFSET UNITYSDK_OFFSET(0xA2D3390)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_UPDATEGLYPHADJUSTMENTRECORDS_OFFSET UNITYSDK_OFFSET(0xA2D33A0)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_COPYLISTDATATOARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_CLEARFONTASSETDATA_OFFSET UNITYSDK_OFFSET(0xA2D33B0)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_CLEARFONTASSETDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0xA2D3840)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_UPDATEFONTASSETDATA_OFFSET UNITYSDK_OFFSET(0xA2D3860)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_CLEARFONTASSETTABLES_OFFSET UNITYSDK_OFFSET(0xA2D33E0)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_CLEARATLASTEXTURES_OFFSET UNITYSDK_OFFSET(0xA2D3620)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_DESTROYATLASTEXTURES_OFFSET UNITYSDK_OFFSET(0xA2CC770)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2D3990)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSET_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA2D3D90)

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int FontAsset_TypeDefinitionIndex = 35566;

	class FontAsset : public Il2CppObject
	{
	public:
		::System::String* m_SourceFontFileGUID; // 0x38
		::UnityEngine::Font* m_SourceFontFile; // 0x40
		::UnityEngine::TextCore::Text::AtlasPopulationMode* m_AtlasPopulationMode; // 0x48
		::System::Boolean InternalDynamicOS; // 0x4C
		::UnityEngine::TextCore::FaceInfo* m_FaceInfo; // 0x50
		::System::Int32 m_FamilyNameHashCode; // 0xB0
		::System::Int32 m_StyleNameHashCode; // 0xB4
		::Il2CppArray<::System::Object*>* m_FontWeightTable; // 0xB8
		Il2CppObject* m_GlyphTable; // 0xC0
		Il2CppObject* m_GlyphLookupDictionary; // 0xC8
		Il2CppObject* m_CharacterTable; // 0xD0
		Il2CppObject* m_CharacterLookupDictionary; // 0xD8
		::UnityEngine::Texture2D* m_AtlasTexture; // 0xE0
		::Il2CppArray<::System::Object*>* m_AtlasTextures; // 0xE8
		::System::Int32 m_AtlasTextureIndex; // 0xF0
		::System::Boolean m_IsMultiAtlasTexturesEnabled; // 0xF4
		::System::Boolean m_ClearDynamicDataOnBuild; // 0xF5
		::System::Int32 m_AtlasWidth; // 0xF8
		::System::Int32 m_AtlasHeight; // 0xFC
		::System::Int32 m_AtlasPadding; // 0x100
		::UnityEngine::TextCore::LowLevel::GlyphRenderMode* m_AtlasRenderMode; // 0x104
		Il2CppObject* m_UsedGlyphRects; // 0x108
		Il2CppObject* m_FreeGlyphRects; // 0x110
		::UnityEngine::TextCore::Text::FontFeatureTable* m_FontFeatureTable; // 0x118
		Il2CppObject* m_FallbackFontAssetTable; // 0x120
		::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings* m_fontAssetCreationEditorSettings; // 0x128
		::System::Single m_RegularStyleWeight; // 0x178
		::System::Single m_RegularStyleSpacing; // 0x17C
		::System::Single m_BoldStyleWeight; // 0x180
		::System::Single m_BoldStyleSpacing; // 0x184
		::System::Byte m_ItalicStyleSlant; // 0x188
		::System::Byte m_TabMultiple; // 0x189
		::System::Boolean IsFontAssetLookupTablesDirty; // 0x18A
		::Unity::Profiling::ProfilerMarker* k_ReadFontAssetDefinitionMarker; // 0x0
		::Unity::Profiling::ProfilerMarker* k_AddSynthesizedCharactersMarker; // 0x8
		::Unity::Profiling::ProfilerMarker* k_TryAddCharacterMarker; // 0x10
		::Unity::Profiling::ProfilerMarker* k_TryAddCharactersMarker; // 0x18
		::Unity::Profiling::ProfilerMarker* k_UpdateGlyphAdjustmentRecordsMarker; // 0x20
		::Unity::Profiling::ProfilerMarker* k_ClearFontAssetDataMarker; // 0x28
		::Unity::Profiling::ProfilerMarker* k_UpdateFontAssetDataMarker; // 0x30
		::System::String* s_DefaultMaterialSuffix; // 0x38
		Il2CppObject* k_SearchedFontAssetLookup; // 0x40
		Il2CppObject* k_FontAssets_FontFeaturesUpdateQueue; // 0x48
		Il2CppObject* k_FontAssets_FontFeaturesUpdateQueueLookup; // 0x50
		Il2CppObject* k_FontAssets_AtlasTexturesUpdateQueue; // 0x58
		Il2CppObject* k_FontAssets_AtlasTexturesUpdateQueueLookup; // 0x60
		Il2CppObject* m_GlyphsToRender; // 0x190
		Il2CppObject* m_GlyphsRendered; // 0x198
		Il2CppObject* m_GlyphIndexList; // 0x1A0
		Il2CppObject* m_GlyphIndexListNewlyAdded; // 0x1A8
		Il2CppObject* m_GlyphsToAdd; // 0x1B0
		Il2CppObject* m_GlyphsToAddLookup; // 0x1B8
		Il2CppObject* m_CharactersToAdd; // 0x1C0
		Il2CppObject* m_CharactersToAddLookup; // 0x1C8
		Il2CppObject* s_MissingCharacterList; // 0x1D0
		Il2CppObject* m_MissingUnicodesFromFontFile; // 0x1D8
		::Il2CppArray<::System::Object*>* k_GlyphIndexArray; // 0x68

		::UnityEngine::Font* get_sourceFontFile()
		{
			return (return (::UnityEngine::Font*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_SOURCEFONTFILE_OFFSET))(nullptr);
		}

		::System::Void set_sourceFontFile(::UnityEngine::Font* arg)
		{
			((::System::Void(*)(::UnityEngine::Font*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SET_SOURCEFONTFILE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::TextCore::Text::AtlasPopulationMode* get_atlasPopulationMode()
		{
			return (return (::UnityEngine::TextCore::Text::AtlasPopulationMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_ATLASPOPULATIONMODE_OFFSET))(nullptr);
		}

		::System::Void set_atlasPopulationMode(::UnityEngine::TextCore::Text::AtlasPopulationMode* arg)
		{
			((::System::Void(*)(::UnityEngine::TextCore::Text::AtlasPopulationMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SET_ATLASPOPULATIONMODE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::TextCore::FaceInfo* get_faceInfo()
		{
			return (return (::UnityEngine::TextCore::FaceInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_FACEINFO_OFFSET))(nullptr);
		}

		::System::Void set_faceInfo(::UnityEngine::TextCore::FaceInfo* arg)
		{
			((::System::Void(*)(::UnityEngine::TextCore::FaceInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SET_FACEINFO_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_familyNameHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_FAMILYNAMEHASHCODE_OFFSET))(nullptr);
		}

		::System::Void set_familyNameHashCode(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SET_FAMILYNAMEHASHCODE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_styleNameHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_STYLENAMEHASHCODE_OFFSET))(nullptr);
		}

		::System::Void set_styleNameHashCode(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SET_STYLENAMEHASHCODE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_fontWeightTable()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_FONTWEIGHTTABLE_OFFSET))(nullptr);
		}

		::System::Void set_fontWeightTable(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SET_FONTWEIGHTTABLE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_glyphTable()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_GLYPHTABLE_OFFSET))(nullptr);
		}

		::System::Void set_glyphTable(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SET_GLYPHTABLE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_glyphLookupTable()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_GLYPHLOOKUPTABLE_OFFSET))(nullptr);
		}

		Il2CppObject* get_characterTable()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_CHARACTERTABLE_OFFSET))(nullptr);
		}

		::System::Void set_characterTable(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SET_CHARACTERTABLE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_characterLookupTable()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_CHARACTERLOOKUPTABLE_OFFSET))(nullptr);
		}

		::UnityEngine::Texture2D* get_atlasTexture()
		{
			return (return (::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_ATLASTEXTURE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_atlasTextures()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_ATLASTEXTURES_OFFSET))(nullptr);
		}

		::System::Void set_atlasTextures(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SET_ATLASTEXTURES_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_atlasTextureCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_ATLASTEXTURECOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_isMultiAtlasTexturesEnabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_ISMULTIATLASTEXTURESENABLED_OFFSET))(nullptr);
		}

		::System::Void set_isMultiAtlasTexturesEnabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SET_ISMULTIATLASTEXTURESENABLED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_clearDynamicDataOnBuild()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_CLEARDYNAMICDATAONBUILD_OFFSET))(nullptr);
		}

		::System::Void set_clearDynamicDataOnBuild(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SET_CLEARDYNAMICDATAONBUILD_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_atlasWidth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_ATLASWIDTH_OFFSET))(nullptr);
		}

		::System::Void set_atlasWidth(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SET_ATLASWIDTH_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_atlasHeight()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_ATLASHEIGHT_OFFSET))(nullptr);
		}

		::System::Void set_atlasHeight(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SET_ATLASHEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_atlasPadding()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_ATLASPADDING_OFFSET))(nullptr);
		}

		::System::Void set_atlasPadding(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SET_ATLASPADDING_OFFSET))(arg, nullptr);
		}

		::UnityEngine::TextCore::LowLevel::GlyphRenderMode* get_atlasRenderMode()
		{
			return (return (::UnityEngine::TextCore::LowLevel::GlyphRenderMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_ATLASRENDERMODE_OFFSET))(nullptr);
		}

		::System::Void set_atlasRenderMode(::UnityEngine::TextCore::LowLevel::GlyphRenderMode* arg)
		{
			((::System::Void(*)(::UnityEngine::TextCore::LowLevel::GlyphRenderMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SET_ATLASRENDERMODE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_usedGlyphRects()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_USEDGLYPHRECTS_OFFSET))(nullptr);
		}

		::System::Void set_usedGlyphRects(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SET_USEDGLYPHRECTS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_freeGlyphRects()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_FREEGLYPHRECTS_OFFSET))(nullptr);
		}

		::System::Void set_freeGlyphRects(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SET_FREEGLYPHRECTS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::TextCore::Text::FontFeatureTable* get_fontFeatureTable()
		{
			return (return (::UnityEngine::TextCore::Text::FontFeatureTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_FONTFEATURETABLE_OFFSET))(nullptr);
		}

		::System::Void set_fontFeatureTable(::UnityEngine::TextCore::Text::FontFeatureTable* arg)
		{
			((::System::Void(*)(::UnityEngine::TextCore::Text::FontFeatureTable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SET_FONTFEATURETABLE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_fallbackFontAssetTable()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_FALLBACKFONTASSETTABLE_OFFSET))(nullptr);
		}

		::System::Void set_fallbackFontAssetTable(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SET_FALLBACKFONTASSETTABLE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings* get_fontAssetCreationEditorSettings()
		{
			return (return (::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_FONTASSETCREATIONEDITORSETTINGS_OFFSET))(nullptr);
		}

		::System::Void set_fontAssetCreationEditorSettings(::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings* arg)
		{
			((::System::Void(*)(::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SET_FONTASSETCREATIONEDITORSETTINGS_OFFSET))(arg, nullptr);
		}

		::System::Single get_regularStyleWeight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_REGULARSTYLEWEIGHT_OFFSET))(nullptr);
		}

		::System::Void set_regularStyleWeight(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SET_REGULARSTYLEWEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Single get_regularStyleSpacing()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_REGULARSTYLESPACING_OFFSET))(nullptr);
		}

		::System::Void set_regularStyleSpacing(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SET_REGULARSTYLESPACING_OFFSET))(arg, nullptr);
		}

		::System::Single get_boldStyleWeight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_BOLDSTYLEWEIGHT_OFFSET))(nullptr);
		}

		::System::Void set_boldStyleWeight(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SET_BOLDSTYLEWEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Single get_boldStyleSpacing()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_BOLDSTYLESPACING_OFFSET))(nullptr);
		}

		::System::Void set_boldStyleSpacing(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SET_BOLDSTYLESPACING_OFFSET))(arg, nullptr);
		}

		::System::Byte get_italicStyleSlant()
		{
			return (return (::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_ITALICSTYLESLANT_OFFSET))(nullptr);
		}

		::System::Void set_italicStyleSlant(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SET_ITALICSTYLESLANT_OFFSET))(arg, nullptr);
		}

		::System::Byte get_tabMultiple()
		{
			return (return (::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GET_TABMULTIPLE_OFFSET))(nullptr);
		}

		::System::Void set_tabMultiple(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SET_TABMULTIPLE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::TextCore::Text::FontAsset* CreateFontAsset(::System::String* str, ::System::String* str, ::System::Int32 arg)
		{
			return (return (::UnityEngine::TextCore::Text::FontAsset*(*)(::System::String*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_CREATEFONTASSET_OFFSET))(str, str, arg, nullptr);
		}

		::UnityEngine::TextCore::Text::FontAsset* CreateFontAsset(::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode* arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::TextCore::Text::AtlasPopulationMode* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::TextCore::Text::FontAsset*(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode*, ::System::Int32, ::System::Int32, ::UnityEngine::TextCore::Text::AtlasPopulationMode*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_CREATEFONTASSET_OFFSET))(str, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::TextCore::Text::FontAsset* CreateFontAsset(::UnityEngine::Font* arg)
		{
			return (return (::UnityEngine::TextCore::Text::FontAsset*(*)(::UnityEngine::Font*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_CREATEFONTASSET_OFFSET))(arg, nullptr);
		}

		::UnityEngine::TextCore::Text::FontAsset* CreateFontAsset(::UnityEngine::Font* arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode* arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::TextCore::Text::AtlasPopulationMode* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::TextCore::Text::FontAsset*(*)(::UnityEngine::Font*, ::System::Int32, ::System::Int32, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode*, ::System::Int32, ::System::Int32, ::UnityEngine::TextCore::Text::AtlasPopulationMode*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_CREATEFONTASSET_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::TextCore::Text::FontAsset* CreateFontAsset(::UnityEngine::Font* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode* arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::TextCore::Text::AtlasPopulationMode* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::TextCore::Text::FontAsset*(*)(::UnityEngine::Font*, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode*, ::System::Int32, ::System::Int32, ::UnityEngine::TextCore::Text::AtlasPopulationMode*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_CREATEFONTASSET_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::TextCore::Text::FontAsset* CreateFontAssetInstance(::UnityEngine::Font* arg, ::System::Int32 arg, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode* arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::TextCore::Text::AtlasPopulationMode* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::TextCore::Text::FontAsset*(*)(::UnityEngine::Font*, ::System::Int32, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode*, ::System::Int32, ::System::Int32, ::UnityEngine::TextCore::Text::AtlasPopulationMode*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_CREATEFONTASSETINSTANCE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void ReadFontAssetDefinition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_READFONTASSETDEFINITION_OFFSET))(nullptr);
		}

		::System::Void InitializeDictionaryLookupTables()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_INITIALIZEDICTIONARYLOOKUPTABLES_OFFSET))(nullptr);
		}

		::System::Void InitializeGlyphLookupDictionary()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_INITIALIZEGLYPHLOOKUPDICTIONARY_OFFSET))(nullptr);
		}

		::System::Void InitializeCharacterLookupDictionary()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_INITIALIZECHARACTERLOOKUPDICTIONARY_OFFSET))(nullptr);
		}

		::System::Void InitializeGlyphPaidAdjustmentRecordsLookupDictionary()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_INITIALIZEGLYPHPAIDADJUSTMENTRECORDSLOOKUPDICTIONARY_OFFSET))(nullptr);
		}

		::System::Void AddSynthesizedCharactersAndFaceMetrics()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_ADDSYNTHESIZEDCHARACTERSANDFACEMETRICS_OFFSET))(nullptr);
		}

		::System::Void AddSynthesizedCharacter(::System::UInt32 arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::UInt32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_ADDSYNTHESIZEDCHARACTER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddCharacterToLookupCache(::System::UInt32 arg, ::UnityEngine::TextCore::Text::Character* arg)
		{
			((::System::Void(*)(::System::UInt32, ::UnityEngine::TextCore::Text::Character*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_ADDCHARACTERTOLOOKUPCACHE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::TextCore::LowLevel::FontEngineError* LoadFontFace()
		{
			return (return (::UnityEngine::TextCore::LowLevel::FontEngineError*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_LOADFONTFACE_OFFSET))(nullptr);
		}

		::System::Void SortCharacterTable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SORTCHARACTERTABLE_OFFSET))(nullptr);
		}

		::System::Void SortGlyphTable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SORTGLYPHTABLE_OFFSET))(nullptr);
		}

		::System::Void SortFontFeatureTable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SORTFONTFEATURETABLE_OFFSET))(nullptr);
		}

		::System::Void SortAllTables()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SORTALLTABLES_OFFSET))(nullptr);
		}

		::System::Boolean HasCharacter(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_HASCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasCharacter(::System::Char arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_HASCHARACTER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean HasCharacter_Internal(::System::UInt32 arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_HASCHARACTER_INTERNAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean HasCharacters(::System::String* str, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_HASCHARACTERS_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean HasCharacters(::System::String* str, ::System::Object[]&* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Object[]&*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_HASCHARACTERS_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Boolean HasCharacters(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_HASCHARACTERS_OFFSET))(str, nullptr);
		}

		::System::String* GetCharacters(::UnityEngine::TextCore::Text::FontAsset* arg)
		{
			return (return (::System::String*(*)(::UnityEngine::TextCore::Text::FontAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GETCHARACTERS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCharactersArray(::UnityEngine::TextCore::Text::FontAsset* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::TextCore::Text::FontAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GETCHARACTERSARRAY_OFFSET))(arg, nullptr);
		}

		::System::UInt32 GetGlyphIndex(::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_GETGLYPHINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterFontAssetForFontFeatureUpdate(::UnityEngine::TextCore::Text::FontAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::TextCore::Text::FontAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_REGISTERFONTASSETFORFONTFEATUREUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateFontFeaturesForFontAssetsInQueue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_UPDATEFONTFEATURESFORFONTASSETSINQUEUE_OFFSET))(nullptr);
		}

		::System::Void RegisterAtlasTextureForApply(::UnityEngine::Texture2D* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture2D*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_REGISTERATLASTEXTUREFORAPPLY_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateAtlasTexturesInQueue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_UPDATEATLASTEXTURESINQUEUE_OFFSET))(nullptr);
		}

		::System::Void UpdateFontAssetInUpdateQueue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_UPDATEFONTASSETINUPDATEQUEUE_OFFSET))(nullptr);
		}

		::System::Boolean TryAddCharacters(::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_TRYADDCHARACTERS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryAddCharacters(::Il2CppArray<::System::Object*>* arg, ::System::Object[]&* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Object[]&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_TRYADDCHARACTERS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryAddCharacters(::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_TRYADDCHARACTERS_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean TryAddCharacters(::System::String* str, ::System::String&* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_TRYADDCHARACTERS_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean TryAddCharacterInternal(::System::UInt32 arg, ::UnityEngine::TextCore::Text::Character&* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::UnityEngine::TextCore::Text::Character&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_TRYADDCHARACTERINTERNAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetCharacter_and_QueueRenderToTexture(::System::UInt32 arg, ::UnityEngine::TextCore::Text::Character&* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::UnityEngine::TextCore::Text::Character&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_TRYGETCHARACTER_AND_QUEUERENDERTOTEXTURE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void TryAddGlyphsToAtlasTextures()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_TRYADDGLYPHSTOATLASTEXTURES_OFFSET))(nullptr);
		}

		::System::Boolean TryAddGlyphsToNewAtlasTexture()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_TRYADDGLYPHSTONEWATLASTEXTURE_OFFSET))(nullptr);
		}

		::System::Void SetupNewAtlasTexture()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_SETUPNEWATLASTEXTURE_OFFSET))(nullptr);
		}

		::System::Void UpdateAtlasTexture()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_UPDATEATLASTEXTURE_OFFSET))(nullptr);
		}

		::System::Void UpdateGlyphAdjustmentRecords()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_UPDATEGLYPHADJUSTMENTRECORDS_OFFSET))(nullptr);
		}

		::System::Void UpdateGlyphAdjustmentRecords(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_UPDATEGLYPHADJUSTMENTRECORDS_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateGlyphAdjustmentRecords(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_UPDATEGLYPHADJUSTMENTRECORDS_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateGlyphAdjustmentRecords(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_UPDATEGLYPHADJUSTMENTRECORDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CopyListDataToArray(Il2CppObject* arg, ::System::Object[]&* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_COPYLISTDATATOARRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ClearFontAssetData(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_CLEARFONTASSETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void ClearFontAssetDataInternal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_CLEARFONTASSETDATAINTERNAL_OFFSET))(nullptr);
		}

		::System::Void UpdateFontAssetData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_UPDATEFONTASSETDATA_OFFSET))(nullptr);
		}

		::System::Void ClearFontAssetTables()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_CLEARFONTASSETTABLES_OFFSET))(nullptr);
		}

		::System::Void ClearAtlasTextures(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_CLEARATLASTEXTURES_OFFSET))(arg, nullptr);
		}

		::System::Void DestroyAtlasTextures()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_DESTROYATLASTEXTURES_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSET_.CCTOR_OFFSET))(nullptr);
		}

	};
}

