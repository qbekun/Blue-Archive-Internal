#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class UCEntityTypes; }
namespace MXUnderCover { class UCPropAniController; }

#define MXUNDERCOVER_UCPROPENTITY_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xD92E60)
#define MXUNDERCOVER_UCPROPENTITY_GET_ISBREAKABLE_OFFSET UNITYSDK_OFFSET(0xD92E70)
#define MXUNDERCOVER_UCPROPENTITY_GET_PROPANICONTROLLER_OFFSET UNITYSDK_OFFSET(0xD886B0)
#define MXUNDERCOVER_UCPROPENTITY_GET_ISTRAP_OFFSET UNITYSDK_OFFSET(0xD92EE0)
#define MXUNDERCOVER_UCPROPENTITY_.CTOR_OFFSET UNITYSDK_OFFSET(0xD92F50)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCPropEntity_TypeDefinitionIndex = 9721;

	class UCPropEntity : public Il2CppObject
	{
	public:
		::MXUnderCover::UCEntityTypes* get_Type()
		{
			return ((::MXUnderCover::UCEntityTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPROPENTITY_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsBreakable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPROPENTITY_GET_ISBREAKABLE_OFFSET))(nullptr);
		}

		::MXUnderCover::UCPropAniController* get_PropAniController()
		{
			return ((::MXUnderCover::UCPropAniController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPROPENTITY_GET_PROPANICONTROLLER_OFFSET))(nullptr);
		}

		::System::Boolean get_IsTrap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPROPENTITY_GET_ISTRAP_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPROPENTITY_.CTOR_OFFSET))(nullptr);
		}

	};
}

