#pragma once
#include "../../unitysdk.h"

#define MX_MINIGAMECCG_ICCGPROCEDUREDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMECCG_ICCGPROCEDUREDATA_GET_PARAMETERDECLARATIONS_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int ICCGProcedureData_TypeDefinitionIndex = 20496;

	class ICCGProcedureData : public Il2CppObject
	{
	public:
		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ICCGPROCEDUREDATA_GET_ID_OFFSET))(nullptr);
		}

		Il2CppObject* get_ParameterDeclarations()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ICCGPROCEDUREDATA_GET_PARAMETERDECLARATIONS_OFFSET))(nullptr);
		}

	};
}

