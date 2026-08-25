#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class ConquestErosionExcelData; }

#define MX_DATA_CONQUESTMASSEROSIONCONTAINER_SET_MASSEROSIONDATABYPHASE_OFFSET UNITYSDK_OFFSET(0x183B720)
#define MX_DATA_CONQUESTMASSEROSIONCONTAINER_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x183B730)
#define MX_DATA_CONQUESTMASSEROSIONCONTAINER_SET_MASSEROSIONDATABYID_OFFSET UNITYSDK_OFFSET(0x183B740)
#define MX_DATA_CONQUESTMASSEROSIONCONTAINER_GET_MASSEROSIONDATABYPHASE_OFFSET UNITYSDK_OFFSET(0x183B750)
#define MX_DATA_CONQUESTMASSEROSIONCONTAINER_GET_MASSEROSIONDATAS_OFFSET UNITYSDK_OFFSET(0x183B760)
#define MX_DATA_CONQUESTMASSEROSIONCONTAINER_.CTOR_OFFSET UNITYSDK_OFFSET(0x183B7B0)
#define MX_DATA_CONQUESTMASSEROSIONCONTAINER_GET_MASSEROSIONDATABYID_OFFSET UNITYSDK_OFFSET(0x183B860)
#define MX_DATA_CONQUESTMASSEROSIONCONTAINER_ADDEROSIONEXCELDATA_OFFSET UNITYSDK_OFFSET(0x183B870)
#define MX_DATA_CONQUESTMASSEROSIONCONTAINER_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x183B9B0)

namespace MX::Data
{
	inline static constexpr unsigned int ConquestMassErosionContainer_TypeDefinitionIndex = 15766;

	class ConquestMassErosionContainer : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x10
		Il2CppObject* _MassErosionDataById_k__BackingField; // 0x18
		Il2CppObject* _MassErosionDataByPhase_k__BackingField; // 0x20

		::System::Void set_MassErosionDataByPhase(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTMASSEROSIONCONTAINER_SET_MASSEROSIONDATABYPHASE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTMASSEROSIONCONTAINER_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_MassErosionDataById(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTMASSEROSIONCONTAINER_SET_MASSEROSIONDATABYID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_MassErosionDataByPhase()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTMASSEROSIONCONTAINER_GET_MASSEROSIONDATABYPHASE_OFFSET))(nullptr);
		}

		Il2CppObject* get_MassErosionDatas()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTMASSEROSIONCONTAINER_GET_MASSEROSIONDATAS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTMASSEROSIONCONTAINER_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_MassErosionDataById()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTMASSEROSIONCONTAINER_GET_MASSEROSIONDATABYID_OFFSET))(nullptr);
		}

		::System::Void AddErosionExcelData(::MX::Data::ConquestErosionExcelData* arg)
		{
			((::System::Void(*)(::MX::Data::ConquestErosionExcelData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTMASSEROSIONCONTAINER_ADDEROSIONEXCELDATA_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTMASSEROSIONCONTAINER_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

	};
}

