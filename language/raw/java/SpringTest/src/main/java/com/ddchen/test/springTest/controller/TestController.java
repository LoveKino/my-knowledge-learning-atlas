package com.ddchen.test.springTest.controller;

import java.util.HashMap;
import java.util.Map;

import javax.servlet.ServletRequest;
import javax.servlet.ServletResponse;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.ResponseBody;

import com.ddchen.test.springTest.service.TestService;

@Controller
@RequestMapping(value = "/test")
public class TestController {
	
	@Autowired
	private TestService testService;
	
	@RequestMapping(value = "/info")
	@ResponseBody
	public Map requestInfo(ServletRequest request,
			ServletResponse response) {
		testService.testService();
		System.out.println("hah~");
		HashMap map = new HashMap<String , String>();
		map.put("a", "aa");
		return map;
	}
	
}
