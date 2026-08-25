#pragma once
#include "../../unitysdk.h"

namespace FlatData { class DreamMakerParameterType; }
namespace FlatData { class DreamMakerParamOperationType; }

#define MX_DATA_MINIGAMEDREAMMAKERPARAMETERCHANGEEXCELINFO_GET_PARAMETERCHANGEAMOUNT_OFFSET UNITYSDK_OFFSET(0x1904820)
#define MX_DATA_MINIGAMEDREAMMAKERPARAMETERCHANGEEXCELINFO_SET_OPERATIONTYPE_OFFSET UNITYSDK_OFFSET(0x1904830)
#define MX_DATA_MINIGAMEDREAMMAKERPARAMETERCHANGEEXCELINFO_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1904840)
#define MX_DATA_MINIGAMEDREAMMAKERPARAMETERCHANGEEXCELINFO_SET_PARAMETERCHANGEAMOUNT_OFFSET UNITYSDK_OFFSET(0x1904850)
#define MX_DATA_MINIGAMEDREAMMAKERPARAMETERCHANGEEXCELINFO_GET_OPERATIONTYPE_OFFSET UNITYSDK_OFFSET(0x1904860)
#define MX_DATA_MINIGAMEDREAMMAKERPARAMETERCHANGEEXCELINFO_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1904870)
#define MX_DATA_MINIGAMEDREAMMAKERPARAMETERCHANGEEXCELINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x19047B0)

namespace MX::Data
{
	inline static constexpr unsigned int MiniGameDreamMakerParameterChangeExcelInfo_TypeDefinitionIndex = 16213;

	class MiniGameDreamMakerParameterChangeExcelInfo : public Il2CppObject
	{
	public:
		::FlatData::DreamMakerParameterType* _Type_k__BackingField; // 0x10
		::FlatData::DreamMakerParamOperationType* _OperationType_k__BackingField; // 0x14
		::System::Int64 _ParameterChangeAmount_k__BackingField; // 0x18

		::System::Int64 get_ParameterChangeAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMMAKERPARAMETERCHANGEEXCELINFO_GET_PARAMETERCHANGEAMOUNT_OFFSET))(nullptr);
		}

		::System::Void set_OperationType(::FlatData::DreamMakerParamOperationType* arg)
		{
			((::System::Void(*)(::FlatData::DreamMakerParamOperationType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMMAKERPARAMETERCHANGEEXCELINFO_SET_OPERATIONTYPE_OFFSET))(arg, nullptr);
		}

		::FlatData::DreamMakerParameterType* get_Type()
		{
			return (return (::FlatData::DreamMakerParameterType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMMAKERPARAMETERCHANGEEXCELINFO_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_ParameterChangeAmount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMMAKERPARAMETERCHANGEEXCELINFO_SET_PARAMETERCHANGEAMOUNT_OFFSET))(arg, nullptr);
		}

		::FlatData::DreamMakerParamOperationType* get_OperationType()
		{
			return (return (::FlatData::DreamMakerParamOperationType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMMAKERPARAMETERCHANGEEXCELINFO_GET_OPERATIONTYPE_OFFSET))(nullptr);
		}

		::System::Void set_Type(::FlatData::DreamMakerParameterType* arg)
		{
			((::System::Void(*)(::FlatData::DreamMakerParameterType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMMAKERPARAMETERCHANGEEXCELINFO_SET_TYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMMAKERPARAMETERCHANGEEXCELINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

