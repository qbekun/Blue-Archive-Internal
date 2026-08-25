#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class IFieldStage; }
namespace MXField::Shared::Data { class FieldSeasonInfo; }
namespace UnityEngine { class Vector3; }

#define MXFIELD_CORE_FIELDUTIL_GETSTAGENAME_OFFSET UNITYSDK_OFFSET(0xED44D0)
#define MXFIELD_CORE_FIELDUTIL_ISPERMANENTEVENT_OFFSET UNITYSDK_OFFSET(0xEDA110)
#define MXFIELD_CORE_FIELDUTIL_SETFIELDUISVISIBILITY_OFFSET UNITYSDK_OFFSET(0xEC9610)
#define MXFIELD_CORE_FIELDUTIL_GETSTAGEPAUSETITLE_OFFSET UNITYSDK_OFFSET(0xED4390)
#define MXFIELD_CORE_FIELDUTIL_SAMPLEPOSITION_OFFSET UNITYSDK_OFFSET(0xECA770)

namespace MXField::Core
{
	inline static constexpr unsigned int FieldUtil_TypeDefinitionIndex = 10965;

	class FieldUtil : public Il2CppObject
	{
	public:
		::System::String* GetStageName(::MX::Data::IFieldStage* arg)
		{
			return ((::System::String*(*)(::MX::Data::IFieldStage*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDUTIL_GETSTAGENAME_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsPermanentEvent(::MXField::Shared::Data::FieldSeasonInfo* arg)
		{
			return ((::System::Boolean(*)(::MXField::Shared::Data::FieldSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDUTIL_ISPERMANENTEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void SetFieldUIsVisibility(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDUTIL_SETFIELDUISVISIBILITY_OFFSET))(arg, nullptr);
		}

		::System::String* GetStagePauseTitle(::MX::Data::IFieldStage* arg)
		{
			return ((::System::String*(*)(::MX::Data::IFieldStage*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDUTIL_GETSTAGEPAUSETITLE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* SamplePosition(::UnityEngine::Vector3* arg, ::System::Single arg2)
		{
			return ((::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDUTIL_SAMPLEPOSITION_OFFSET))(arg, arg2, nullptr);
		}

	};
}

