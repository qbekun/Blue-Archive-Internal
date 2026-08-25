#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class FurnitureExcel; }
namespace FlatData { class ProductionStep; }
namespace FlatData { class Rarity; }
namespace FlatData { class FurnitureCategory; }
namespace FlatData { class FurnitureSubCategory; }
namespace FlatData { class Tag; }
namespace FlatData { class FurnitureFunctionType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_FURNITUREEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B29300)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GETROOTASFURNITUREEXCEL_OFFSET UNITYSDK_OFFSET(0x1B29310)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GETROOTASFURNITUREEXCEL_OFFSET UNITYSDK_OFFSET(0x1B29370)
#define MX_DATA_EXCEL_FURNITUREEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B29400)
#define MX_DATA_EXCEL_FURNITUREEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B293D0)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B29420)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GET_PRODUCTIONSTEP_OFFSET UNITYSDK_OFFSET(0x1B29470)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x1B294C0)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1B29510)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GET_SUBCATEGORY_OFFSET UNITYSDK_OFFSET(0x1B29560)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GET_CHECKFLOORDECORATION_OFFSET UNITYSDK_OFFSET(0x1B295B0)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1B29600)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GET_STARGRADEINIT_OFFSET UNITYSDK_OFFSET(0x1B29650)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GET_TIER_OFFSET UNITYSDK_OFFSET(0x1B296A0)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GET_ICON_OFFSET UNITYSDK_OFFSET(0x1B296F0)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GETICONBYTES_OFFSET UNITYSDK_OFFSET(0x1B29730)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GET_SIZEWIDTH_OFFSET UNITYSDK_OFFSET(0x1B29750)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GET_SIZEHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B297A0)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GET_OTHERSIZE_OFFSET UNITYSDK_OFFSET(0x1B297F0)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GET_EXPANDWIDTH_OFFSET UNITYSDK_OFFSET(0x1B29840)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GET_ENABLE_OFFSET UNITYSDK_OFFSET(0x1B29890)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GET_REVERSEROTATION_OFFSET UNITYSDK_OFFSET(0x1B298E0)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GET_PREFAB_OFFSET UNITYSDK_OFFSET(0x1B29930)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GETPREFABBYTES_OFFSET UNITYSDK_OFFSET(0x1B29970)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GET_PREFABEXPAND_OFFSET UNITYSDK_OFFSET(0x1B29990)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GETPREFABEXPANDBYTES_OFFSET UNITYSDK_OFFSET(0x1B299D0)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GET_SUBPREFAB_OFFSET UNITYSDK_OFFSET(0x1B299F0)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GETSUBPREFABBYTES_OFFSET UNITYSDK_OFFSET(0x1B29A30)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GET_SUBEXPANDPREFAB_OFFSET UNITYSDK_OFFSET(0x1B29A50)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GETSUBEXPANDPREFABBYTES_OFFSET UNITYSDK_OFFSET(0x1B29A90)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GET_CORNERPREFAB_OFFSET UNITYSDK_OFFSET(0x1B29AB0)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GETCORNERPREFABBYTES_OFFSET UNITYSDK_OFFSET(0x1B29AF0)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GET_STACKABLEMAX_OFFSET UNITYSDK_OFFSET(0x1B29B10)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GET_RECIPECRAFTID_OFFSET UNITYSDK_OFFSET(0x1B29B60)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GET_SETGROUDPID_OFFSET UNITYSDK_OFFSET(0x1B29BB0)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GET_COMFORTBONUS_OFFSET UNITYSDK_OFFSET(0x1B29C00)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GET_VISITOPERATIONTYPE_OFFSET UNITYSDK_OFFSET(0x1B29C50)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GET_VISITBONUSOPERATIONTYPE_OFFSET UNITYSDK_OFFSET(0x1B29CA0)
#define MX_DATA_EXCEL_FURNITUREEXCEL_TAGS_OFFSET UNITYSDK_OFFSET(0x1B29CF0)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GET_TAGSLENGTH_OFFSET UNITYSDK_OFFSET(0x1B29D50)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GETTAGSBYTES_OFFSET UNITYSDK_OFFSET(0x1B29D90)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GET_CRAFTQUALITYTIER0_OFFSET UNITYSDK_OFFSET(0x1B29DB0)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GET_CRAFTQUALITYTIER1_OFFSET UNITYSDK_OFFSET(0x1B29E00)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GET_CRAFTQUALITYTIER2_OFFSET UNITYSDK_OFFSET(0x1B29E50)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GET_SHIFTINGCRAFTQUALITY_OFFSET UNITYSDK_OFFSET(0x1B29EA0)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GET_FURNITUREFUNCTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1B29EF0)
#define MX_DATA_EXCEL_FURNITUREEXCEL_FURNITUREFUNCTIONPARAMETER_OFFSET UNITYSDK_OFFSET(0x1B29F40)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GET_FURNITUREFUNCTIONPARAMETERLENGTH_OFFSET UNITYSDK_OFFSET(0x1B29FA0)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GETFURNITUREFUNCTIONPARAMETERBYTES_OFFSET UNITYSDK_OFFSET(0x1B29FE0)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GET_VIDEOID_OFFSET UNITYSDK_OFFSET(0x1B2A000)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GET_EVENTCOLLECTIONID_OFFSET UNITYSDK_OFFSET(0x1B2A050)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GET_FURNITUREBUBBLEOFFSETX_OFFSET UNITYSDK_OFFSET(0x1B2A0A0)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GET_FURNITUREBUBBLEOFFSETY_OFFSET UNITYSDK_OFFSET(0x1B2A0F0)
#define MX_DATA_EXCEL_FURNITUREEXCEL_CAFECHARACTERSTATEREQ_OFFSET UNITYSDK_OFFSET(0x1B2A140)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GET_CAFECHARACTERSTATEREQLENGTH_OFFSET UNITYSDK_OFFSET(0x1B2A190)
#define MX_DATA_EXCEL_FURNITUREEXCEL_CAFECHARACTERSTATEADD_OFFSET UNITYSDK_OFFSET(0x1B2A1D0)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GET_CAFECHARACTERSTATEADDLENGTH_OFFSET UNITYSDK_OFFSET(0x1B2A220)
#define MX_DATA_EXCEL_FURNITUREEXCEL_CAFECHARACTERSTATEMAKE_OFFSET UNITYSDK_OFFSET(0x1B2A260)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GET_CAFECHARACTERSTATEMAKELENGTH_OFFSET UNITYSDK_OFFSET(0x1B2A2B0)
#define MX_DATA_EXCEL_FURNITUREEXCEL_CAFECHARACTERSTATEONLY_OFFSET UNITYSDK_OFFSET(0x1B2A2F0)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GET_CAFECHARACTERSTATEONLYLENGTH_OFFSET UNITYSDK_OFFSET(0x1B2A340)
#define MX_DATA_EXCEL_FURNITUREEXCEL_GET_HIDECRAFTSHORTCUT_OFFSET UNITYSDK_OFFSET(0x1B2A380)
#define MX_DATA_EXCEL_FURNITUREEXCEL_CREATEFURNITUREEXCEL_OFFSET UNITYSDK_OFFSET(0x1B2A3D0)
#define MX_DATA_EXCEL_FURNITUREEXCEL_STARTFURNITUREEXCEL_OFFSET UNITYSDK_OFFSET(0x1B2B3B0)
#define MX_DATA_EXCEL_FURNITUREEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1B2AE20)
#define MX_DATA_EXCEL_FURNITUREEXCEL_ADDPRODUCTIONSTEP_OFFSET UNITYSDK_OFFSET(0x1B2B270)
#define MX_DATA_EXCEL_FURNITUREEXCEL_ADDRARITY_OFFSET UNITYSDK_OFFSET(0x1B2B240)
#define MX_DATA_EXCEL_FURNITUREEXCEL_ADDCATEGORY_OFFSET UNITYSDK_OFFSET(0x1B2B210)
#define MX_DATA_EXCEL_FURNITUREEXCEL_ADDSUBCATEGORY_OFFSET UNITYSDK_OFFSET(0x1B2B1E0)
#define MX_DATA_EXCEL_FURNITUREEXCEL_ADDCHECKFLOORDECORATION_OFFSET UNITYSDK_OFFSET(0x1B2B330)
#define MX_DATA_EXCEL_FURNITUREEXCEL_ADDLOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1B2B1B0)
#define MX_DATA_EXCEL_FURNITUREEXCEL_ADDSTARGRADEINIT_OFFSET UNITYSDK_OFFSET(0x1B2B180)
#define MX_DATA_EXCEL_FURNITUREEXCEL_ADDTIER_OFFSET UNITYSDK_OFFSET(0x1B2ADF0)
#define MX_DATA_EXCEL_FURNITUREEXCEL_ADDICON_OFFSET UNITYSDK_OFFSET(0x1B2B150)
#define MX_DATA_EXCEL_FURNITUREEXCEL_ADDSIZEWIDTH_OFFSET UNITYSDK_OFFSET(0x1B2B120)
#define MX_DATA_EXCEL_FURNITUREEXCEL_ADDSIZEHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B2B0F0)
#define MX_DATA_EXCEL_FURNITUREEXCEL_ADDOTHERSIZE_OFFSET UNITYSDK_OFFSET(0x1B2B0C0)
#define MX_DATA_EXCEL_FURNITUREEXCEL_ADDEXPANDWIDTH_OFFSET UNITYSDK_OFFSET(0x1B2B090)
#define MX_DATA_EXCEL_FURNITUREEXCEL_ADDENABLE_OFFSET UNITYSDK_OFFSET(0x1B2B300)
#define MX_DATA_EXCEL_FURNITUREEXCEL_ADDREVERSEROTATION_OFFSET UNITYSDK_OFFSET(0x1B2B2D0)
#define MX_DATA_EXCEL_FURNITUREEXCEL_ADDPREFAB_OFFSET UNITYSDK_OFFSET(0x1B2B060)
#define MX_DATA_EXCEL_FURNITUREEXCEL_ADDPREFABEXPAND_OFFSET UNITYSDK_OFFSET(0x1B2B030)
#define MX_DATA_EXCEL_FURNITUREEXCEL_ADDSUBPREFAB_OFFSET UNITYSDK_OFFSET(0x1B2B000)
#define MX_DATA_EXCEL_FURNITUREEXCEL_ADDSUBEXPANDPREFAB_OFFSET UNITYSDK_OFFSET(0x1B2AFD0)
#define MX_DATA_EXCEL_FURNITUREEXCEL_ADDCORNERPREFAB_OFFSET UNITYSDK_OFFSET(0x1B2AFA0)
#define MX_DATA_EXCEL_FURNITUREEXCEL_ADDSTACKABLEMAX_OFFSET UNITYSDK_OFFSET(0x1B2ADC0)
#define MX_DATA_EXCEL_FURNITUREEXCEL_ADDRECIPECRAFTID_OFFSET UNITYSDK_OFFSET(0x1B2AD90)
#define MX_DATA_EXCEL_FURNITUREEXCEL_ADDSETGROUDPID_OFFSET UNITYSDK_OFFSET(0x1B2AD60)
#define MX_DATA_EXCEL_FURNITUREEXCEL_ADDCOMFORTBONUS_OFFSET UNITYSDK_OFFSET(0x1B2AD30)
#define MX_DATA_EXCEL_FURNITUREEXCEL_ADDVISITOPERATIONTYPE_OFFSET UNITYSDK_OFFSET(0x1B2AD00)
#define MX_DATA_EXCEL_FURNITUREEXCEL_ADDVISITBONUSOPERATIONTYPE_OFFSET UNITYSDK_OFFSET(0x1B2ACD0)
#define MX_DATA_EXCEL_FURNITUREEXCEL_ADDTAGS_OFFSET UNITYSDK_OFFSET(0x1B2AF70)
#define MX_DATA_EXCEL_FURNITUREEXCEL_CREATETAGSVECTOR_OFFSET UNITYSDK_OFFSET(0x1B2B3D0)
#define MX_DATA_EXCEL_FURNITUREEXCEL_STARTTAGSVECTOR_OFFSET UNITYSDK_OFFSET(0x1B2B460)
#define MX_DATA_EXCEL_FURNITUREEXCEL_ADDCRAFTQUALITYTIER0_OFFSET UNITYSDK_OFFSET(0x1B2ACA0)
#define MX_DATA_EXCEL_FURNITUREEXCEL_ADDCRAFTQUALITYTIER1_OFFSET UNITYSDK_OFFSET(0x1B2AC70)
#define MX_DATA_EXCEL_FURNITUREEXCEL_ADDCRAFTQUALITYTIER2_OFFSET UNITYSDK_OFFSET(0x1B2AC40)
#define MX_DATA_EXCEL_FURNITUREEXCEL_ADDSHIFTINGCRAFTQUALITY_OFFSET UNITYSDK_OFFSET(0x1B2AC10)
#define MX_DATA_EXCEL_FURNITUREEXCEL_ADDFURNITUREFUNCTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1B2AF40)
#define MX_DATA_EXCEL_FURNITUREEXCEL_ADDFURNITUREFUNCTIONPARAMETER_OFFSET UNITYSDK_OFFSET(0x1B2AF10)
#define MX_DATA_EXCEL_FURNITUREEXCEL_CREATEFURNITUREFUNCTIONPARAMETERVECTOR_OFFSET UNITYSDK_OFFSET(0x1B2B4A0)
#define MX_DATA_EXCEL_FURNITUREEXCEL_STARTFURNITUREFUNCTIONPARAMETERVECTOR_OFFSET UNITYSDK_OFFSET(0x1B2B530)
#define MX_DATA_EXCEL_FURNITUREEXCEL_ADDVIDEOID_OFFSET UNITYSDK_OFFSET(0x1B2ABE0)
#define MX_DATA_EXCEL_FURNITUREEXCEL_ADDEVENTCOLLECTIONID_OFFSET UNITYSDK_OFFSET(0x1B2ABB0)
#define MX_DATA_EXCEL_FURNITUREEXCEL_ADDFURNITUREBUBBLEOFFSETX_OFFSET UNITYSDK_OFFSET(0x1B2AB80)
#define MX_DATA_EXCEL_FURNITUREEXCEL_ADDFURNITUREBUBBLEOFFSETY_OFFSET UNITYSDK_OFFSET(0x1B2AB50)
#define MX_DATA_EXCEL_FURNITUREEXCEL_ADDCAFECHARACTERSTATEREQ_OFFSET UNITYSDK_OFFSET(0x1B2AEE0)
#define MX_DATA_EXCEL_FURNITUREEXCEL_CREATECAFECHARACTERSTATEREQVECTOR_OFFSET UNITYSDK_OFFSET(0x1B2B570)
#define MX_DATA_EXCEL_FURNITUREEXCEL_STARTCAFECHARACTERSTATEREQVECTOR_OFFSET UNITYSDK_OFFSET(0x1B2B600)
#define MX_DATA_EXCEL_FURNITUREEXCEL_ADDCAFECHARACTERSTATEADD_OFFSET UNITYSDK_OFFSET(0x1B2AEB0)
#define MX_DATA_EXCEL_FURNITUREEXCEL_CREATECAFECHARACTERSTATEADDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B2B640)
#define MX_DATA_EXCEL_FURNITUREEXCEL_STARTCAFECHARACTERSTATEADDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B2B6D0)
#define MX_DATA_EXCEL_FURNITUREEXCEL_ADDCAFECHARACTERSTATEMAKE_OFFSET UNITYSDK_OFFSET(0x1B2AE80)
#define MX_DATA_EXCEL_FURNITUREEXCEL_CREATECAFECHARACTERSTATEMAKEVECTOR_OFFSET UNITYSDK_OFFSET(0x1B2B710)
#define MX_DATA_EXCEL_FURNITUREEXCEL_STARTCAFECHARACTERSTATEMAKEVECTOR_OFFSET UNITYSDK_OFFSET(0x1B2B7A0)
#define MX_DATA_EXCEL_FURNITUREEXCEL_ADDCAFECHARACTERSTATEONLY_OFFSET UNITYSDK_OFFSET(0x1B2AE50)
#define MX_DATA_EXCEL_FURNITUREEXCEL_CREATECAFECHARACTERSTATEONLYVECTOR_OFFSET UNITYSDK_OFFSET(0x1B2B7E0)
#define MX_DATA_EXCEL_FURNITUREEXCEL_STARTCAFECHARACTERSTATEONLYVECTOR_OFFSET UNITYSDK_OFFSET(0x1B2B870)
#define MX_DATA_EXCEL_FURNITUREEXCEL_ADDHIDECRAFTSHORTCUT_OFFSET UNITYSDK_OFFSET(0x1B2B2A0)
#define MX_DATA_EXCEL_FURNITUREEXCEL_ENDFURNITUREEXCEL_OFFSET UNITYSDK_OFFSET(0x1B2B360)
#define MX_DATA_EXCEL_FURNITUREEXCEL_FINISHFURNITUREEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B2B8B0)
#define MX_DATA_EXCEL_FURNITUREEXCEL_FINISHSIZEPREFIXEDFURNITUREEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B2B8D0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int FurnitureExcel_TypeDefinitionIndex = 18017;

	class FurnitureExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::FurnitureExcel* GetRootAsFurnitureExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::FurnitureExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GETROOTASFURNITUREEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::FurnitureExcel* GetRootAsFurnitureExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::FurnitureExcel* arg)
		{
			return (return (::MX::Data::Excel::FurnitureExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::FurnitureExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GETROOTASFURNITUREEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::FurnitureExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::FurnitureExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::FlatData::ProductionStep* get_ProductionStep()
		{
			return (return (::FlatData::ProductionStep*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GET_PRODUCTIONSTEP_OFFSET))(nullptr);
		}

		::FlatData::Rarity* get_Rarity()
		{
			return (return (::FlatData::Rarity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GET_RARITY_OFFSET))(nullptr);
		}

		::FlatData::FurnitureCategory* get_Category()
		{
			return (return (::FlatData::FurnitureCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GET_CATEGORY_OFFSET))(nullptr);
		}

		::FlatData::FurnitureSubCategory* get_SubCategory()
		{
			return (return (::FlatData::FurnitureSubCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GET_SUBCATEGORY_OFFSET))(nullptr);
		}

		::System::Boolean get_CheckFloorDecoration()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GET_CHECKFLOORDECORATION_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GET_LOCALIZEETCID_OFFSET))(nullptr);
		}

		::System::Int32 get_StarGradeInit()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GET_STARGRADEINIT_OFFSET))(nullptr);
		}

		::System::Int64 get_Tier()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GET_TIER_OFFSET))(nullptr);
		}

		::System::String* get_Icon()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GET_ICON_OFFSET))(nullptr);
		}

		Il2CppObject* GetIconBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GETICONBYTES_OFFSET))(nullptr);
		}

		::System::Int32 get_SizeWidth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GET_SIZEWIDTH_OFFSET))(nullptr);
		}

		::System::Int32 get_SizeHeight()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GET_SIZEHEIGHT_OFFSET))(nullptr);
		}

		::System::Int32 get_OtherSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GET_OTHERSIZE_OFFSET))(nullptr);
		}

		::System::Int32 get_ExpandWidth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GET_EXPANDWIDTH_OFFSET))(nullptr);
		}

		::System::Boolean get_Enable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GET_ENABLE_OFFSET))(nullptr);
		}

		::System::Boolean get_ReverseRotation()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GET_REVERSEROTATION_OFFSET))(nullptr);
		}

		::System::String* get_Prefab()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GET_PREFAB_OFFSET))(nullptr);
		}

		Il2CppObject* GetPrefabBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GETPREFABBYTES_OFFSET))(nullptr);
		}

		::System::String* get_PrefabExpand()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GET_PREFABEXPAND_OFFSET))(nullptr);
		}

		Il2CppObject* GetPrefabExpandBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GETPREFABEXPANDBYTES_OFFSET))(nullptr);
		}

		::System::String* get_SubPrefab()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GET_SUBPREFAB_OFFSET))(nullptr);
		}

		Il2CppObject* GetSubPrefabBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GETSUBPREFABBYTES_OFFSET))(nullptr);
		}

		::System::String* get_SubExpandPrefab()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GET_SUBEXPANDPREFAB_OFFSET))(nullptr);
		}

		Il2CppObject* GetSubExpandPrefabBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GETSUBEXPANDPREFABBYTES_OFFSET))(nullptr);
		}

		::System::String* get_CornerPrefab()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GET_CORNERPREFAB_OFFSET))(nullptr);
		}

		Il2CppObject* GetCornerPrefabBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GETCORNERPREFABBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_StackableMax()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GET_STACKABLEMAX_OFFSET))(nullptr);
		}

		::System::Int64 get_RecipeCraftId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GET_RECIPECRAFTID_OFFSET))(nullptr);
		}

		::System::Int64 get_SetGroudpId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GET_SETGROUDPID_OFFSET))(nullptr);
		}

		::System::Int64 get_ComfortBonus()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GET_COMFORTBONUS_OFFSET))(nullptr);
		}

		::System::Int64 get_VisitOperationType()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GET_VISITOPERATIONTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_VisitBonusOperationType()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GET_VISITBONUSOPERATIONTYPE_OFFSET))(nullptr);
		}

		::FlatData::Tag* Tags(::System::Int32 arg)
		{
			return (return (::FlatData::Tag*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_TAGS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_TagsLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GET_TAGSLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetTagsBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GETTAGSBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_CraftQualityTier0()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GET_CRAFTQUALITYTIER0_OFFSET))(nullptr);
		}

		::System::Int64 get_CraftQualityTier1()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GET_CRAFTQUALITYTIER1_OFFSET))(nullptr);
		}

		::System::Int64 get_CraftQualityTier2()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GET_CRAFTQUALITYTIER2_OFFSET))(nullptr);
		}

		::System::Int64 get_ShiftingCraftQuality()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GET_SHIFTINGCRAFTQUALITY_OFFSET))(nullptr);
		}

		::FlatData::FurnitureFunctionType* get_FurnitureFunctionType()
		{
			return (return (::FlatData::FurnitureFunctionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GET_FURNITUREFUNCTIONTYPE_OFFSET))(nullptr);
		}

		::System::Int64 FurnitureFunctionParameter(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_FURNITUREFUNCTIONPARAMETER_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_FurnitureFunctionParameterLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GET_FURNITUREFUNCTIONPARAMETERLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetFurnitureFunctionParameterBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GETFURNITUREFUNCTIONPARAMETERBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_VideoId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GET_VIDEOID_OFFSET))(nullptr);
		}

		::System::Int64 get_EventCollectionId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GET_EVENTCOLLECTIONID_OFFSET))(nullptr);
		}

		::System::Int64 get_FurnitureBubbleOffsetX()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GET_FURNITUREBUBBLEOFFSETX_OFFSET))(nullptr);
		}

		::System::Int64 get_FurnitureBubbleOffsetY()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GET_FURNITUREBUBBLEOFFSETY_OFFSET))(nullptr);
		}

		::System::String* CafeCharacterStateReq(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_CAFECHARACTERSTATEREQ_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CafeCharacterStateReqLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GET_CAFECHARACTERSTATEREQLENGTH_OFFSET))(nullptr);
		}

		::System::String* CafeCharacterStateAdd(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_CAFECHARACTERSTATEADD_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CafeCharacterStateAddLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GET_CAFECHARACTERSTATEADDLENGTH_OFFSET))(nullptr);
		}

		::System::String* CafeCharacterStateMake(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_CAFECHARACTERSTATEMAKE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CafeCharacterStateMakeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GET_CAFECHARACTERSTATEMAKELENGTH_OFFSET))(nullptr);
		}

		::System::String* CafeCharacterStateOnly(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_CAFECHARACTERSTATEONLY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CafeCharacterStateOnlyLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GET_CAFECHARACTERSTATEONLYLENGTH_OFFSET))(nullptr);
		}

		::System::Boolean get_HideCraftShortcut()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_GET_HIDECRAFTSHORTCUT_OFFSET))(nullptr);
		}

		Il2CppObject* CreateFurnitureExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::ProductionStep* arg, ::FlatData::Rarity* arg, ::FlatData::FurnitureCategory* arg, ::FlatData::FurnitureSubCategory* arg, ::System::Boolean arg, ::System::UInt32 arg, ::System::Int32 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Boolean arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::FurnitureFunctionType* arg, ::FlatBuffers::VectorOffset* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::ProductionStep*, ::FlatData::Rarity*, ::FlatData::FurnitureCategory*, ::FlatData::FurnitureSubCategory*, ::System::Boolean, ::System::UInt32, ::System::Int32, ::System::Int64, ::FlatBuffers::StringOffset*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatBuffers::VectorOffset*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatData::FurnitureFunctionType*, ::FlatBuffers::VectorOffset*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_CREATEFURNITUREEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartFurnitureExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_STARTFURNITUREEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProductionStep(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ProductionStep* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ProductionStep*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_ADDPRODUCTIONSTEP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRarity(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::Rarity* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::Rarity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_ADDRARITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCategory(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::FurnitureCategory* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::FurnitureCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_ADDCATEGORY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSubCategory(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::FurnitureSubCategory* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::FurnitureSubCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_ADDSUBCATEGORY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCheckFloorDecoration(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_ADDCHECKFLOORDECORATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeEtcId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_ADDLOCALIZEETCID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStarGradeInit(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_ADDSTARGRADEINIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTier(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_ADDTIER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIcon(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_ADDICON_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSizeWidth(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_ADDSIZEWIDTH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSizeHeight(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_ADDSIZEHEIGHT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOtherSize(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_ADDOTHERSIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExpandWidth(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_ADDEXPANDWIDTH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnable(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_ADDENABLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddReverseRotation(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_ADDREVERSEROTATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPrefab(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_ADDPREFAB_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPrefabExpand(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_ADDPREFABEXPAND_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSubPrefab(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_ADDSUBPREFAB_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSubExpandPrefab(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_ADDSUBEXPANDPREFAB_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCornerPrefab(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_ADDCORNERPREFAB_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStackableMax(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_ADDSTACKABLEMAX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRecipeCraftId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_ADDRECIPECRAFTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSetGroudpId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_ADDSETGROUDPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddComfortBonus(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_ADDCOMFORTBONUS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVisitOperationType(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_ADDVISITOPERATIONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVisitBonusOperationType(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_ADDVISITBONUSOPERATIONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTags(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_ADDTAGS_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateTagsVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_CREATETAGSVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartTagsVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_STARTTAGSVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCraftQualityTier0(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_ADDCRAFTQUALITYTIER0_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCraftQualityTier1(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_ADDCRAFTQUALITYTIER1_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCraftQualityTier2(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_ADDCRAFTQUALITYTIER2_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShiftingCraftQuality(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_ADDSHIFTINGCRAFTQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFurnitureFunctionType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::FurnitureFunctionType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::FurnitureFunctionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_ADDFURNITUREFUNCTIONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFurnitureFunctionParameter(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_ADDFURNITUREFUNCTIONPARAMETER_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateFurnitureFunctionParameterVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_CREATEFURNITUREFUNCTIONPARAMETERVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartFurnitureFunctionParameterVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_STARTFURNITUREFUNCTIONPARAMETERVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVideoId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_ADDVIDEOID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventCollectionId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_ADDEVENTCOLLECTIONID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFurnitureBubbleOffsetX(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_ADDFURNITUREBUBBLEOFFSETX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFurnitureBubbleOffsetY(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_ADDFURNITUREBUBBLEOFFSETY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCafeCharacterStateReq(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_ADDCAFECHARACTERSTATEREQ_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateCafeCharacterStateReqVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_CREATECAFECHARACTERSTATEREQVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartCafeCharacterStateReqVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_STARTCAFECHARACTERSTATEREQVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCafeCharacterStateAdd(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_ADDCAFECHARACTERSTATEADD_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateCafeCharacterStateAddVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_CREATECAFECHARACTERSTATEADDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartCafeCharacterStateAddVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_STARTCAFECHARACTERSTATEADDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCafeCharacterStateMake(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_ADDCAFECHARACTERSTATEMAKE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateCafeCharacterStateMakeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_CREATECAFECHARACTERSTATEMAKEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartCafeCharacterStateMakeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_STARTCAFECHARACTERSTATEMAKEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCafeCharacterStateOnly(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_ADDCAFECHARACTERSTATEONLY_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateCafeCharacterStateOnlyVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_CREATECAFECHARACTERSTATEONLYVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartCafeCharacterStateOnlyVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_STARTCAFECHARACTERSTATEONLYVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddHideCraftShortcut(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_ADDHIDECRAFTSHORTCUT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndFurnitureExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_ENDFURNITUREEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishFurnitureExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_FINISHFURNITUREEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedFurnitureExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREEXCEL_FINISHSIZEPREFIXEDFURNITUREEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

