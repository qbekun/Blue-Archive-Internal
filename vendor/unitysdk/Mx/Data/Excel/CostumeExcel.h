#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class CostumeExcel; }
namespace FlatData { class ProductionStep; }
namespace FlatData { class Rarity; }
namespace FlatData { class EntityMaterialType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_COSTUMEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A76FF0)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GETROOTASCOSTUMEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A77000)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GETROOTASCOSTUMEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A77060)
#define MX_DATA_EXCEL_COSTUMEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A770F0)
#define MX_DATA_EXCEL_COSTUMEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A770C0)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GET_COSTUMEGROUPID_OFFSET UNITYSDK_OFFSET(0x1A77110)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GET_COSTUMEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1A77160)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GET_DEVNAME_OFFSET UNITYSDK_OFFSET(0x1A771B0)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GETDEVNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1A771F0)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GET_PRODUCTIONSTEP_OFFSET UNITYSDK_OFFSET(0x1A77210)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GET_ISDEFAULT_OFFSET UNITYSDK_OFFSET(0x1A77260)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GET_COLLECTIONVISIBLE_OFFSET UNITYSDK_OFFSET(0x1A772B0)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GET_RELEASEDATE_OFFSET UNITYSDK_OFFSET(0x1A77300)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GETRELEASEDATEBYTES_OFFSET UNITYSDK_OFFSET(0x1A77340)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GET_COLLECTIONVISIBLESTARTDATE_OFFSET UNITYSDK_OFFSET(0x1A77360)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GETCOLLECTIONVISIBLESTARTDATEBYTES_OFFSET UNITYSDK_OFFSET(0x1A773A0)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GET_COLLECTIONVISIBLEENDDATE_OFFSET UNITYSDK_OFFSET(0x1A773C0)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GETCOLLECTIONVISIBLEENDDATEBYTES_OFFSET UNITYSDK_OFFSET(0x1A77400)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x1A77420)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GET_CHARACTERSKILLLISTGROUPID_OFFSET UNITYSDK_OFFSET(0x1A77470)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GET_SPINERESOURCENAME_OFFSET UNITYSDK_OFFSET(0x1A774C0)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GETSPINERESOURCENAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1A77500)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GET_SPINERESOURCENAMEDIORAMA_OFFSET UNITYSDK_OFFSET(0x1A77520)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GETSPINERESOURCENAMEDIORAMABYTES_OFFSET UNITYSDK_OFFSET(0x1A77560)
#define MX_DATA_EXCEL_COSTUMEEXCEL_SPINERESOURCENAMEDIORAMAFORFORMCONVERSION_OFFSET UNITYSDK_OFFSET(0x1A77580)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GET_SPINERESOURCENAMEDIORAMAFORFORMCONVERSIONLENGTH_OFFSET UNITYSDK_OFFSET(0x1A775D0)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GET_ENTITYMATERIALTYPE_OFFSET UNITYSDK_OFFSET(0x1A77610)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GET_MODELPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1A77660)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GETMODELPREFABNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1A776A0)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GET_ANIMATORNAME_OFFSET UNITYSDK_OFFSET(0x1A776C0)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GETANIMATORNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1A77700)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GET_CAFEMODELPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1A77720)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GETCAFEMODELPREFABNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1A77760)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GET_ECHELONMODELPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1A77780)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GETECHELONMODELPREFABNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1A777C0)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GET_STRATEGYMODELPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1A777E0)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GETSTRATEGYMODELPREFABNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1A77820)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GET_TEXTUREDIR_OFFSET UNITYSDK_OFFSET(0x1A77840)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GETTEXTUREDIRBYTES_OFFSET UNITYSDK_OFFSET(0x1A77880)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GET_COLLECTIONTEXTUREPATH_OFFSET UNITYSDK_OFFSET(0x1A778A0)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GETCOLLECTIONTEXTUREPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1A778E0)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GET_COLLECTIONBGTEXTUREPATH_OFFSET UNITYSDK_OFFSET(0x1A77900)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GETCOLLECTIONBGTEXTUREPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1A77940)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GET_COMBATSTYLETEXTUREPATH_OFFSET UNITYSDK_OFFSET(0x1A77960)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GETCOMBATSTYLETEXTUREPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1A779A0)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GET_USEOBJECTHPBAR_OFFSET UNITYSDK_OFFSET(0x1A779C0)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GET_TEXTUREBOSS_OFFSET UNITYSDK_OFFSET(0x1A77A10)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GETTEXTUREBOSSBYTES_OFFSET UNITYSDK_OFFSET(0x1A77A50)
#define MX_DATA_EXCEL_COSTUMEEXCEL_TEXTURESKILLCARD_OFFSET UNITYSDK_OFFSET(0x1A77A70)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GET_TEXTURESKILLCARDLENGTH_OFFSET UNITYSDK_OFFSET(0x1A77AC0)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GET_INFORMATIONPACEL_OFFSET UNITYSDK_OFFSET(0x1A77B00)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GETINFORMATIONPACELBYTES_OFFSET UNITYSDK_OFFSET(0x1A77B40)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GET_ANIMATIONSSR_OFFSET UNITYSDK_OFFSET(0x1A77B60)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GETANIMATIONSSRBYTES_OFFSET UNITYSDK_OFFSET(0x1A77BA0)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GET_ENTERSTRATEGYANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0x1A77BC0)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GETENTERSTRATEGYANIMATIONNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1A77C00)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GET_ANIMATIONVALIDATOR_OFFSET UNITYSDK_OFFSET(0x1A77C20)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GET_CHARACTERVOICEGROUPID_OFFSET UNITYSDK_OFFSET(0x1A77C70)
#define MX_DATA_EXCEL_COSTUMEEXCEL_GET_SHOWOBJECTHPSTATUS_OFFSET UNITYSDK_OFFSET(0x1A77CC0)
#define MX_DATA_EXCEL_COSTUMEEXCEL_CREATECOSTUMEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A77D10)
#define MX_DATA_EXCEL_COSTUMEEXCEL_STARTCOSTUMEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A78930)
#define MX_DATA_EXCEL_COSTUMEEXCEL_ADDCOSTUMEGROUPID_OFFSET UNITYSDK_OFFSET(0x1A78340)
#define MX_DATA_EXCEL_COSTUMEEXCEL_ADDCOSTUMEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1A78310)
#define MX_DATA_EXCEL_COSTUMEEXCEL_ADDDEVNAME_OFFSET UNITYSDK_OFFSET(0x1A787C0)
#define MX_DATA_EXCEL_COSTUMEEXCEL_ADDPRODUCTIONSTEP_OFFSET UNITYSDK_OFFSET(0x1A78790)
#define MX_DATA_EXCEL_COSTUMEEXCEL_ADDISDEFAULT_OFFSET UNITYSDK_OFFSET(0x1A788B0)
#define MX_DATA_EXCEL_COSTUMEEXCEL_ADDCOLLECTIONVISIBLE_OFFSET UNITYSDK_OFFSET(0x1A78880)
#define MX_DATA_EXCEL_COSTUMEEXCEL_ADDRELEASEDATE_OFFSET UNITYSDK_OFFSET(0x1A78760)
#define MX_DATA_EXCEL_COSTUMEEXCEL_ADDCOLLECTIONVISIBLESTARTDATE_OFFSET UNITYSDK_OFFSET(0x1A78730)
#define MX_DATA_EXCEL_COSTUMEEXCEL_ADDCOLLECTIONVISIBLEENDDATE_OFFSET UNITYSDK_OFFSET(0x1A78700)
#define MX_DATA_EXCEL_COSTUMEEXCEL_ADDRARITY_OFFSET UNITYSDK_OFFSET(0x1A786D0)
#define MX_DATA_EXCEL_COSTUMEEXCEL_ADDCHARACTERSKILLLISTGROUPID_OFFSET UNITYSDK_OFFSET(0x1A782E0)
#define MX_DATA_EXCEL_COSTUMEEXCEL_ADDSPINERESOURCENAME_OFFSET UNITYSDK_OFFSET(0x1A786A0)
#define MX_DATA_EXCEL_COSTUMEEXCEL_ADDSPINERESOURCENAMEDIORAMA_OFFSET UNITYSDK_OFFSET(0x1A78670)
#define MX_DATA_EXCEL_COSTUMEEXCEL_ADDSPINERESOURCENAMEDIORAMAFORFORMCONVERSION_OFFSET UNITYSDK_OFFSET(0x1A78640)
#define MX_DATA_EXCEL_COSTUMEEXCEL_CREATESPINERESOURCENAMEDIORAMAFORFORMCONVERSIONVECTOR_OFFSET UNITYSDK_OFFSET(0x1A78950)
#define MX_DATA_EXCEL_COSTUMEEXCEL_STARTSPINERESOURCENAMEDIORAMAFORFORMCONVERSIONVECTOR_OFFSET UNITYSDK_OFFSET(0x1A789E0)
#define MX_DATA_EXCEL_COSTUMEEXCEL_ADDENTITYMATERIALTYPE_OFFSET UNITYSDK_OFFSET(0x1A78610)
#define MX_DATA_EXCEL_COSTUMEEXCEL_ADDMODELPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1A785E0)
#define MX_DATA_EXCEL_COSTUMEEXCEL_ADDANIMATORNAME_OFFSET UNITYSDK_OFFSET(0x1A785B0)
#define MX_DATA_EXCEL_COSTUMEEXCEL_ADDCAFEMODELPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1A78580)
#define MX_DATA_EXCEL_COSTUMEEXCEL_ADDECHELONMODELPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1A78550)
#define MX_DATA_EXCEL_COSTUMEEXCEL_ADDSTRATEGYMODELPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1A78520)
#define MX_DATA_EXCEL_COSTUMEEXCEL_ADDTEXTUREDIR_OFFSET UNITYSDK_OFFSET(0x1A784F0)
#define MX_DATA_EXCEL_COSTUMEEXCEL_ADDCOLLECTIONTEXTUREPATH_OFFSET UNITYSDK_OFFSET(0x1A784C0)
#define MX_DATA_EXCEL_COSTUMEEXCEL_ADDCOLLECTIONBGTEXTUREPATH_OFFSET UNITYSDK_OFFSET(0x1A78490)
#define MX_DATA_EXCEL_COSTUMEEXCEL_ADDCOMBATSTYLETEXTUREPATH_OFFSET UNITYSDK_OFFSET(0x1A78460)
#define MX_DATA_EXCEL_COSTUMEEXCEL_ADDUSEOBJECTHPBAR_OFFSET UNITYSDK_OFFSET(0x1A78850)
#define MX_DATA_EXCEL_COSTUMEEXCEL_ADDTEXTUREBOSS_OFFSET UNITYSDK_OFFSET(0x1A78430)
#define MX_DATA_EXCEL_COSTUMEEXCEL_ADDTEXTURESKILLCARD_OFFSET UNITYSDK_OFFSET(0x1A78400)
#define MX_DATA_EXCEL_COSTUMEEXCEL_CREATETEXTURESKILLCARDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A78A20)
#define MX_DATA_EXCEL_COSTUMEEXCEL_STARTTEXTURESKILLCARDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A78AB0)
#define MX_DATA_EXCEL_COSTUMEEXCEL_ADDINFORMATIONPACEL_OFFSET UNITYSDK_OFFSET(0x1A783D0)
#define MX_DATA_EXCEL_COSTUMEEXCEL_ADDANIMATIONSSR_OFFSET UNITYSDK_OFFSET(0x1A783A0)
#define MX_DATA_EXCEL_COSTUMEEXCEL_ADDENTERSTRATEGYANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0x1A78370)
#define MX_DATA_EXCEL_COSTUMEEXCEL_ADDANIMATIONVALIDATOR_OFFSET UNITYSDK_OFFSET(0x1A78820)
#define MX_DATA_EXCEL_COSTUMEEXCEL_ADDCHARACTERVOICEGROUPID_OFFSET UNITYSDK_OFFSET(0x1A782B0)
#define MX_DATA_EXCEL_COSTUMEEXCEL_ADDSHOWOBJECTHPSTATUS_OFFSET UNITYSDK_OFFSET(0x1A787F0)
#define MX_DATA_EXCEL_COSTUMEEXCEL_ENDCOSTUMEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A788E0)
#define MX_DATA_EXCEL_COSTUMEEXCEL_FINISHCOSTUMEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A78AF0)
#define MX_DATA_EXCEL_COSTUMEEXCEL_FINISHSIZEPREFIXEDCOSTUMEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A78B10)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CostumeExcel_TypeDefinitionIndex = 17354;

	class CostumeExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CostumeExcel* GetRootAsCostumeExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CostumeExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GETROOTASCOSTUMEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CostumeExcel* GetRootAsCostumeExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::CostumeExcel* arg)
		{
			return (return (::MX::Data::Excel::CostumeExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::CostumeExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GETROOTASCOSTUMEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::CostumeExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CostumeExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_CostumeGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GET_COSTUMEGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_CostumeUniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GET_COSTUMEUNIQUEID_OFFSET))(nullptr);
		}

		::System::String* get_DevName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GET_DEVNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetDevNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GETDEVNAMEBYTES_OFFSET))(nullptr);
		}

		::FlatData::ProductionStep* get_ProductionStep()
		{
			return (return (::FlatData::ProductionStep*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GET_PRODUCTIONSTEP_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDefault()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GET_ISDEFAULT_OFFSET))(nullptr);
		}

		::System::Boolean get_CollectionVisible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GET_COLLECTIONVISIBLE_OFFSET))(nullptr);
		}

		::System::String* get_ReleaseDate()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GET_RELEASEDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetReleaseDateBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GETRELEASEDATEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_CollectionVisibleStartDate()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GET_COLLECTIONVISIBLESTARTDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetCollectionVisibleStartDateBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GETCOLLECTIONVISIBLESTARTDATEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_CollectionVisibleEndDate()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GET_COLLECTIONVISIBLEENDDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetCollectionVisibleEndDateBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GETCOLLECTIONVISIBLEENDDATEBYTES_OFFSET))(nullptr);
		}

		::FlatData::Rarity* get_Rarity()
		{
			return (return (::FlatData::Rarity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GET_RARITY_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterSkillListGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GET_CHARACTERSKILLLISTGROUPID_OFFSET))(nullptr);
		}

		::System::String* get_SpineResourceName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GET_SPINERESOURCENAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetSpineResourceNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GETSPINERESOURCENAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_SpineResourceNameDiorama()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GET_SPINERESOURCENAMEDIORAMA_OFFSET))(nullptr);
		}

		Il2CppObject* GetSpineResourceNameDioramaBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GETSPINERESOURCENAMEDIORAMABYTES_OFFSET))(nullptr);
		}

		::System::String* SpineResourceNameDioramaForFormConversion(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_SPINERESOURCENAMEDIORAMAFORFORMCONVERSION_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SpineResourceNameDioramaForFormConversionLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GET_SPINERESOURCENAMEDIORAMAFORFORMCONVERSIONLENGTH_OFFSET))(nullptr);
		}

		::FlatData::EntityMaterialType* get_EntityMaterialType()
		{
			return (return (::FlatData::EntityMaterialType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GET_ENTITYMATERIALTYPE_OFFSET))(nullptr);
		}

		::System::String* get_ModelPrefabName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GET_MODELPREFABNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetModelPrefabNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GETMODELPREFABNAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_AnimatorName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GET_ANIMATORNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetAnimatorNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GETANIMATORNAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_CafeModelPrefabName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GET_CAFEMODELPREFABNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetCafeModelPrefabNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GETCAFEMODELPREFABNAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_EchelonModelPrefabName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GET_ECHELONMODELPREFABNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetEchelonModelPrefabNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GETECHELONMODELPREFABNAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_StrategyModelPrefabName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GET_STRATEGYMODELPREFABNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetStrategyModelPrefabNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GETSTRATEGYMODELPREFABNAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_TextureDir()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GET_TEXTUREDIR_OFFSET))(nullptr);
		}

		Il2CppObject* GetTextureDirBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GETTEXTUREDIRBYTES_OFFSET))(nullptr);
		}

		::System::String* get_CollectionTexturePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GET_COLLECTIONTEXTUREPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetCollectionTexturePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GETCOLLECTIONTEXTUREPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_CollectionBGTexturePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GET_COLLECTIONBGTEXTUREPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetCollectionBGTexturePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GETCOLLECTIONBGTEXTUREPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_CombatStyleTexturePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GET_COMBATSTYLETEXTUREPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetCombatStyleTexturePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GETCOMBATSTYLETEXTUREPATHBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_UseObjectHPBAR()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GET_USEOBJECTHPBAR_OFFSET))(nullptr);
		}

		::System::String* get_TextureBoss()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GET_TEXTUREBOSS_OFFSET))(nullptr);
		}

		Il2CppObject* GetTextureBossBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GETTEXTUREBOSSBYTES_OFFSET))(nullptr);
		}

		::System::String* TextureSkillCard(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_TEXTURESKILLCARD_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_TextureSkillCardLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GET_TEXTURESKILLCARDLENGTH_OFFSET))(nullptr);
		}

		::System::String* get_InformationPacel()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GET_INFORMATIONPACEL_OFFSET))(nullptr);
		}

		Il2CppObject* GetInformationPacelBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GETINFORMATIONPACELBYTES_OFFSET))(nullptr);
		}

		::System::String* get_AnimationSSR()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GET_ANIMATIONSSR_OFFSET))(nullptr);
		}

		Il2CppObject* GetAnimationSSRBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GETANIMATIONSSRBYTES_OFFSET))(nullptr);
		}

		::System::String* get_EnterStrategyAnimationName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GET_ENTERSTRATEGYANIMATIONNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetEnterStrategyAnimationNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GETENTERSTRATEGYANIMATIONNAMEBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_AnimationValidator()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GET_ANIMATIONVALIDATOR_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterVoiceGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GET_CHARACTERVOICEGROUPID_OFFSET))(nullptr);
		}

		::System::Boolean get_ShowObjectHpStatus()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_GET_SHOWOBJECTHPSTATUS_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCostumeExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatData::ProductionStep* arg, ::System::Boolean arg, ::System::Boolean arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatData::Rarity* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatData::EntityMaterialType* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Boolean arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Boolean arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatData::ProductionStep*, ::System::Boolean, ::System::Boolean, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatData::Rarity*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::VectorOffset*, ::FlatData::EntityMaterialType*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Boolean, ::FlatBuffers::StringOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Boolean, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_CREATECOSTUMEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartCostumeExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_STARTCOSTUMEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddCostumeGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_ADDCOSTUMEGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCostumeUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_ADDCOSTUMEUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDevName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_ADDDEVNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProductionStep(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ProductionStep* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ProductionStep*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_ADDPRODUCTIONSTEP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsDefault(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_ADDISDEFAULT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCollectionVisible(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_ADDCOLLECTIONVISIBLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddReleaseDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_ADDRELEASEDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCollectionVisibleStartDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_ADDCOLLECTIONVISIBLESTARTDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCollectionVisibleEndDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_ADDCOLLECTIONVISIBLEENDDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRarity(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::Rarity* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::Rarity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_ADDRARITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCharacterSkillListGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_ADDCHARACTERSKILLLISTGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSpineResourceName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_ADDSPINERESOURCENAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSpineResourceNameDiorama(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_ADDSPINERESOURCENAMEDIORAMA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSpineResourceNameDioramaForFormConversion(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_ADDSPINERESOURCENAMEDIORAMAFORFORMCONVERSION_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateSpineResourceNameDioramaForFormConversionVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_CREATESPINERESOURCENAMEDIORAMAFORFORMCONVERSIONVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartSpineResourceNameDioramaForFormConversionVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_STARTSPINERESOURCENAMEDIORAMAFORFORMCONVERSIONVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEntityMaterialType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EntityMaterialType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EntityMaterialType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_ADDENTITYMATERIALTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddModelPrefabName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_ADDMODELPREFABNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAnimatorName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_ADDANIMATORNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCafeModelPrefabName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_ADDCAFEMODELPREFABNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEchelonModelPrefabName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_ADDECHELONMODELPREFABNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStrategyModelPrefabName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_ADDSTRATEGYMODELPREFABNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTextureDir(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_ADDTEXTUREDIR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCollectionTexturePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_ADDCOLLECTIONTEXTUREPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCollectionBGTexturePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_ADDCOLLECTIONBGTEXTUREPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCombatStyleTexturePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_ADDCOMBATSTYLETEXTUREPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUseObjectHPBAR(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_ADDUSEOBJECTHPBAR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTextureBoss(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_ADDTEXTUREBOSS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTextureSkillCard(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_ADDTEXTURESKILLCARD_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateTextureSkillCardVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_CREATETEXTURESKILLCARDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartTextureSkillCardVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_STARTTEXTURESKILLCARDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddInformationPacel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_ADDINFORMATIONPACEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAnimationSSR(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_ADDANIMATIONSSR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnterStrategyAnimationName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_ADDENTERSTRATEGYANIMATIONNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAnimationValidator(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_ADDANIMATIONVALIDATOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCharacterVoiceGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_ADDCHARACTERVOICEGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShowObjectHpStatus(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_ADDSHOWOBJECTHPSTATUS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndCostumeExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_ENDCOSTUMEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishCostumeExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_FINISHCOSTUMEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedCostumeExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCEL_FINISHSIZEPREFIXEDCOSTUMEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

