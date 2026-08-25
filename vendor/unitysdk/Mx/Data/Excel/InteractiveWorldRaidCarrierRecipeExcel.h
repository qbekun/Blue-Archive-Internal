#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class InteractiveWorldRaidCarrierRecipeExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B5AED0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL_GETROOTASINTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B5AEE0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL_GETROOTASINTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B5AF40)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B5AFD0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B5AFA0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0x1B5AFF0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL_GET_SKILLSLOT_OFFSET UNITYSDK_OFFSET(0x1B5B040)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL_GETSKILLSLOTBYTES_OFFSET UNITYSDK_OFFSET(0x1B5B080)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1B5B0A0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL_RECIPEINGREDIENTID_OFFSET UNITYSDK_OFFSET(0x1B5B0F0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL_GET_RECIPEINGREDIENTIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1B5B150)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL_GETRECIPEINGREDIENTIDBYTES_OFFSET UNITYSDK_OFFSET(0x1B5B190)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL_CREATEINTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B5B1B0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL_STARTINTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B5B3A0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL_ADDSKILLID_OFFSET UNITYSDK_OFFSET(0x1B5B290)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL_ADDSKILLSLOT_OFFSET UNITYSDK_OFFSET(0x1B5B320)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL_ADDLEVEL_OFFSET UNITYSDK_OFFSET(0x1B5B2F0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL_ADDRECIPEINGREDIENTID_OFFSET UNITYSDK_OFFSET(0x1B5B2C0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL_CREATERECIPEINGREDIENTIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B5B3C0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL_STARTRECIPEINGREDIENTIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B5B450)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL_ENDINTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B5B350)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL_FINISHINTERACTIVEWORLDRAIDCARRIERRECIPEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B5B490)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL_FINISHSIZEPREFIXEDINTERACTIVEWORLDRAIDCARRIERRECIPEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B5B4B0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int InteractiveWorldRaidCarrierRecipeExcel_TypeDefinitionIndex = 18232;

	class InteractiveWorldRaidCarrierRecipeExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::InteractiveWorldRaidCarrierRecipeExcel* GetRootAsInteractiveWorldRaidCarrierRecipeExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::InteractiveWorldRaidCarrierRecipeExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL_GETROOTASINTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::InteractiveWorldRaidCarrierRecipeExcel* GetRootAsInteractiveWorldRaidCarrierRecipeExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::InteractiveWorldRaidCarrierRecipeExcel* arg)
		{
			return (return (::MX::Data::Excel::InteractiveWorldRaidCarrierRecipeExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::InteractiveWorldRaidCarrierRecipeExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL_GETROOTASINTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::InteractiveWorldRaidCarrierRecipeExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::InteractiveWorldRaidCarrierRecipeExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_SkillId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL_GET_SKILLID_OFFSET))(nullptr);
		}

		::System::String* get_SkillSlot()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL_GET_SKILLSLOT_OFFSET))(nullptr);
		}

		Il2CppObject* GetSkillSlotBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL_GETSKILLSLOTBYTES_OFFSET))(nullptr);
		}

		::System::Int32 get_Level()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Int64 RecipeIngredientId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL_RECIPEINGREDIENTID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RecipeIngredientIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL_GET_RECIPEINGREDIENTIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRecipeIngredientIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL_GETRECIPEINGREDIENTIDBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateInteractiveWorldRaidCarrierRecipeExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::System::Int32 arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::System::Int32, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL_CREATEINTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartInteractiveWorldRaidCarrierRecipeExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL_STARTINTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddSkillId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL_ADDSKILLID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSkillSlot(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL_ADDSKILLSLOT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL_ADDLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRecipeIngredientId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL_ADDRECIPEINGREDIENTID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRecipeIngredientIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL_CREATERECIPEINGREDIENTIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRecipeIngredientIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL_STARTRECIPEINGREDIENTIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndInteractiveWorldRaidCarrierRecipeExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL_ENDINTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishInteractiveWorldRaidCarrierRecipeExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL_FINISHINTERACTIVEWORLDRAIDCARRIERRECIPEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedInteractiveWorldRaidCarrierRecipeExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCEL_FINISHSIZEPREFIXEDINTERACTIVEWORLDRAIDCARRIERRECIPEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

