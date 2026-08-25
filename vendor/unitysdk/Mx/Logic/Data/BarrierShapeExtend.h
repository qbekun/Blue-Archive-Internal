#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class BarrierShape; }
namespace MX::Core::Physics2D::Shapes { class Shape; }

#define MX_LOGIC_DATA_BARRIERSHAPEEXTEND_GETPARAMETERCOUNT_OFFSET UNITYSDK_OFFSET(0x11FAFA0)
#define MX_LOGIC_DATA_BARRIERSHAPEEXTEND_TOSHAPE_OFFSET UNITYSDK_OFFSET(0x11FAFC0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int BarrierShapeExtend_TypeDefinitionIndex = 13678;

	class BarrierShapeExtend : public Il2CppObject
	{
	public:
		::System::Int32 GetParameterCount(::MX::Logic::Data::BarrierShape* arg)
		{
			return ((::System::Int32(*)(::MX::Logic::Data::BarrierShape*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BARRIERSHAPEEXTEND_GETPARAMETERCOUNT_OFFSET))(arg, nullptr);
		}

		::MX::Core::Physics2D::Shapes::Shape* ToShape(::MX::Logic::Data::BarrierShape* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::MX::Core::Physics2D::Shapes::Shape*(*)(::MX::Logic::Data::BarrierShape*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BARRIERSHAPEEXTEND_TOSHAPE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

