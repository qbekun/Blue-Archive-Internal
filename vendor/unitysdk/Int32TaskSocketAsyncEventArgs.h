#pragma once
#include "unitysdk.h"

#define INT32TASKSOCKETASYNCEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AA26D0)

	inline static constexpr unsigned int Int32TaskSocketAsyncEventArgs_TypeDefinitionIndex = 29893;

	class Int32TaskSocketAsyncEventArgs : public ::MS::Internal::Xml::Cache::XPathNode
	{
	public:
		::System::Boolean _wrapExceptionsInIOExceptions; // 0xD8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INT32TASKSOCKETASYNCEVENTARGS_.CTOR_OFFSET))(nullptr);
		}

	};

