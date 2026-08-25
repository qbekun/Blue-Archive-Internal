#pragma once
#include "../../unitysdk.h"

namespace NPA { class NPRequestTypeTag; }

#define NPA_SERVICE_NXPTOYPLATEACTIONPERFORMEDRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC60A0)
#define NPA_SERVICE_NXPTOYPLATEACTIONPERFORMEDRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC60B0)
#define NPA_SERVICE_NXPTOYPLATEACTIONPERFORMEDRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC60D0)

namespace NPA::Service
{
	inline static constexpr unsigned int NXPToyPlateActionPerformedResult_TypeDefinitionIndex = 27318;

	class NXPToyPlateActionPerformedResult : public Il2CppObject
	{
	public:
		::System::String* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPTOYPLATEACTIONPERFORMEDRESULT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPTOYPLATEACTIONPERFORMEDRESULT_.CTOR_OFFSET))(arg, str, str, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::String* str, ::System::String* str, ::NPA::NPRequestTypeTag* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::System::String*, ::NPA::NPRequestTypeTag*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPTOYPLATEACTIONPERFORMEDRESULT_.CTOR_OFFSET))(arg, str, str, arg, nullptr);
		}

	};
}

