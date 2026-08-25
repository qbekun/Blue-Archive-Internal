#pragma once
#include "../unitysdk.h"

#define ANIMANCER_IWRAPPER_GET_WRAPPEDOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Animancer
{
	inline static constexpr unsigned int IWrapper_TypeDefinitionIndex = 35157;

	class IWrapper : public Il2CppObject
	{
	public:
		::System::Object* get_WrappedObject()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_IWRAPPER_GET_WRAPPEDOBJECT_OFFSET))(nullptr);
		}

	};
}

